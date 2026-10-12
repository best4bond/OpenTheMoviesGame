// Exports the decompiled C of every function to chunked text files, plus an index, so the
// whole binary can be searched offline with grep (offset usage, string refs, call patterns).
// Read-only: does not modify the Ghidra program.
//
// GUI:      Script Manager -> add F:\DecompilingTheMovies\ghidra_scripts as a script directory,
//           run ExportDecompiled, pick an output folder.
// Headless: analyzeHeadless <projectDir> <projectName> -process MoviesSE.exe -noanalysis -readOnly
//           -scriptPath <thisFolder> -postScript ExportDecompiled.java <outputFolder>
//
//@category Export

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;

public class ExportDecompiled extends GhidraScript {

	private static final int FUNCS_PER_FILE = 500;
	private static final int DECOMPILE_TIMEOUT_SECONDS = 30;
	// Catch@/Unwind@ exception stubs and thunks are Ghidra/compiler artifacts (~25k of the 60k functions).
	private static final boolean SKIP_NOISE = true;

	private BufferedWriter open(File f) throws Exception {
		return new BufferedWriter(new OutputStreamWriter(new FileOutputStream(f), StandardCharsets.UTF_8));
	}

	private static String csv(String s) {
		return "\"" + s.replace("\"", "\"\"") + "\"";
	}

	@Override
	protected void run() throws Exception {
		File outDir;
		String[] args = getScriptArgs();
		if (args != null && args.length > 0) {
			outDir = new File(args[0]);
		}
		else {
			outDir = askDirectory("Choose output folder for the decompiled export", "Export here");
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

		FunctionManager fm = currentProgram.getFunctionManager();
		int total = fm.getFunctionCount();
		monitor.initialize(total);

		int exported = 0, skipped = 0, failed = 0, fileIndex = 0, inFile = 0;
		BufferedWriter chunk = null;
		BufferedWriter index = open(new File(outDir, "index.csv"));
		index.write("address,name,body_size,file,status\n");

		try {
			FunctionIterator it = fm.getFunctions(true);
			while (it.hasNext()) {
				monitor.checkCancelled();
				Function f = it.next();
				monitor.incrementProgress(1);
				String name = f.getName();

				if (SKIP_NOISE &&
					(f.isThunk() || name.startsWith("Catch@") || name.startsWith("Unwind@"))) {
					skipped++;
					continue;
				}

				if (chunk == null || inFile >= FUNCS_PER_FILE) {
					if (chunk != null) {
						chunk.close();
					}
					fileIndex++;
					inFile = 0;
					chunk = open(new File(outDir, String.format("decomp_%04d.c", fileIndex)));
				}
				String chunkName = String.format("decomp_%04d.c", fileIndex);
				String addr = f.getEntryPoint().toString();

				DecompileResults res = ifc.decompileFunction(f, DECOMPILE_TIMEOUT_SECONDS, monitor);
				String status;
				chunk.write("//// FUNCTION " + name + " @ " + addr + " ////\n");
				if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
					chunk.write(res.getDecompiledFunction().getC());
					status = "ok";
				}
				else {
					String why = (res == null) ? "no result" : String.valueOf(res.getErrorMessage());
					chunk.write("// DECOMPILE FAILED: " + why + "\n");
					status = (res != null && res.isTimedOut()) ? "timeout" : "failed";
					failed++;
				}
				chunk.write("\n");
				index.write(addr + "," + csv(name) + "," + f.getBody().getNumAddresses() + "," +
					chunkName + "," + status + "\n");

				inFile++;
				exported++;
				if (exported % 500 == 0) {
					monitor.setMessage("Exported " + exported + " functions");
					chunk.flush();
					index.flush();
				}
			}
		}
		finally {
			if (chunk != null) {
				chunk.close();
			}
			index.close();
			ifc.dispose();
			println("ExportDecompiled: exported=" + exported + " skipped(noise)=" + skipped +
				" failed/timeout=" + failed + " files=" + fileIndex + " -> " + outDir);
		}
	}
}
