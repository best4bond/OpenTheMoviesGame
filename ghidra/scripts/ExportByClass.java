// Exports the decompiled C of every IDENTIFIED (non-FUN_) function into one .c file per class/namespace,
// using the live names in the open Ghidra project (so renames done in Ghidra are always included, unlike the
// stale ExportDecompiled snapshot). Also writes index.csv (name,address,file) and INDEX.md (group -> count).
// Read-only: does not modify the Ghidra program.
//
// Group key, in order: the Ghidra namespace of the function (templates stripped, "::" nesting joined to the
// outermost class, e.g. TM::CStar -> CStar), else the text before the first '_' in the name
// (CBasicReview_SelectComments -> CBasicReview), else "_misc". Thunks and Catch@/Unwind@ stubs are skipped.
//
// The output is decompiler text derived from the game: keep it local (data/identified/ is gitignored).
//
// GUI:      Script Manager -> add <repo>/ghidra/scripts as a script directory, run ExportByClass,
//           pick an output folder (suggested: <repo>/data/identified).
// Headless: analyzeHeadless <projectDir> <projectName> -process MoviesSE.exe -noanalysis -readOnly
//           -scriptPath <repo>/ghidra/scripts -postScript ExportByClass.java <outputFolder> [includeUnnamed]
//
//@category Export

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Namespace;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import java.util.regex.Pattern;

public class ExportByClass extends GhidraScript {

	private static final int DECOMPILE_TIMEOUT_SECONDS = 30;
	private static final Pattern UNNAMED = Pattern.compile("^FUN_[0-9a-fA-F]{8}$");
	private static final Pattern TEMPLATE = Pattern.compile("<[^<>]*>");

	private static String stripTemplates(String s) {
		String prev;
		do {
			prev = s;
			s = TEMPLATE.matcher(s).replaceAll("");
		}
		while (!s.equals(prev));
		return s;
	}

	private static String clean(String s) {
		return s.replaceAll("[^A-Za-z0-9]", "");
	}

	private String groupOf(Function f) {
		// Outermost non-global namespace that is not just a library/namespace wrapper of the function itself.
		Namespace ns = f.getParentNamespace();
		String ownerClass = null;
		while (ns != null && !ns.isGlobal()) {
			ownerClass = ns.getName();
			ns = ns.getParentNamespace();
		}
		if (ownerClass != null) {
			String g = clean(stripTemplates(ownerClass).replaceFirst("^~", ""));
			if (!g.isEmpty()) {
				return g;
			}
		}
		String name = stripTemplates(f.getName()).replaceFirst("^~", "");
		if (name.contains("::")) {
			String g = clean(name.split("::")[0]);
			if (!g.isEmpty()) {
				return g;
			}
		}
		String trimmed = name.replaceAll("^_+|_+$", "");
		int us = trimmed.indexOf('_');
		if (us > 0) {
			String g = clean(trimmed.substring(0, us));
			if (!g.isEmpty()) {
				return g;
			}
		}
		return "_misc";
	}

	private BufferedWriter open(File f) throws Exception {
		return new BufferedWriter(new OutputStreamWriter(new FileOutputStream(f), StandardCharsets.UTF_8));
	}

	private static String csv(String s) {
		return "\"" + s.replace("\"", "\"\"") + "\"";
	}

	private static class Entry {
		String name;
		String addr;
		String body;
	}

	@Override
	protected void run() throws Exception {
		File outDir;
		boolean includeUnnamed = false;
		String[] args = getScriptArgs();
		if (args != null && args.length > 0) {
			outDir = new File(args[0]);
			includeUnnamed = args.length > 1 && args[1].equalsIgnoreCase("includeUnnamed");
		}
		else {
			outDir = askDirectory("Choose output folder for the per-class export", "Export here");
		}
		if (!outDir.exists() && !outDir.mkdirs()) {
			printerr("Could not create output folder: " + outDir);
			return;
		}

		DecompInterface ifc = new DecompInterface();
		ifc.setOptions(new DecompileOptions());
		if (!ifc.openProgram(currentProgram)) {
			printerr("Decompiler failed to open the program: " + ifc.getLastMessage());
			return;
		}

		// Case-insensitive: Windows file names are, so "Math" and "math" must share one file (otherwise one overwrites the other).
		Map<String, List<Entry>> groups = new TreeMap<>(String.CASE_INSENSITIVE_ORDER);
		int total = currentProgram.getFunctionManager().getFunctionCount();
		monitor.initialize(total);
		int exported = 0, skipped = 0, unnamed = 0, failed = 0;

		try {
			FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
			while (it.hasNext()) {
				monitor.checkCancelled();
				Function f = it.next();
				monitor.incrementProgress(1);
				String name = f.getName();

				if (f.isThunk() || name.startsWith("Catch@") || name.startsWith("Unwind@")) {
					skipped++;
					continue;
				}
				boolean isUnnamed = UNNAMED.matcher(name).matches();
				if (isUnnamed && !includeUnnamed) {
					unnamed++;
					continue;
				}

				DecompileResults res = ifc.decompileFunction(f, DECOMPILE_TIMEOUT_SECONDS, monitor);
				Entry e = new Entry();
				e.name = f.getName(true); // includes namespace, e.g. TM::CStar::Tick
				e.addr = f.getEntryPoint().toString();
				if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
					e.body = res.getDecompiledFunction().getC().trim();
				}
				else {
					String why = (res == null) ? "no result" : String.valueOf(res.getErrorMessage());
					e.body = "// DECOMPILE FAILED: " + why;
					failed++;
				}
				String g = isUnnamed ? "_unnamed" : groupOf(f);
				groups.computeIfAbsent(g, k -> new ArrayList<>()).add(e);
				exported++;
				if (exported % 500 == 0) {
					monitor.setMessage("Decompiled " + exported + " functions");
				}
			}
		}
		finally {
			ifc.dispose();
		}

		BufferedWriter index = open(new File(outDir, "index.csv"));
		BufferedWriter md = open(new File(outDir, "INDEX.md"));
		try {
			index.write("name,address,file\n");
			md.write("# Identified functions by class/namespace\n\n| group | functions |\n|---|---|\n");
			List<Map.Entry<String, List<Entry>>> bySize = new ArrayList<>(groups.entrySet());
			bySize.sort((a, b) -> b.getValue().size() - a.getValue().size());
			for (Map.Entry<String, List<Entry>> g : bySize) {
				md.write("| " + g.getKey() + " | " + g.getValue().size() + " |\n");
			}
			for (Map.Entry<String, List<Entry>> g : groups.entrySet()) {
				List<Entry> items = g.getValue();
				items.sort((a, b) -> a.addr.compareTo(b.addr));
				String file = g.getKey() + ".c";
				BufferedWriter out = open(new File(outDir, file));
				try {
					out.write("/* " + g.getKey() + " - " + items.size() +
						" functions, sorted by address. Generated by ghidra/scripts/ExportByClass.java */\n\n");
					for (Entry e : items) {
						out.write("/* " + e.name.replace("*/", "* /") + " @ " + e.addr + " */\n");
						out.write(e.body + "\n\n");
						index.write(csv(e.name) + "," + e.addr + "," + file + "\n");
					}
				}
				finally {
					out.close();
				}
			}
		}
		finally {
			index.close();
			md.close();
		}
		println("ExportByClass: functions=" + exported + " groups=" + groups.size() + " unnamed(skipped)=" +
			unnamed + " thunk/noise(skipped)=" + skipped + " failed=" + failed + " -> " + outDir);
	}
}
