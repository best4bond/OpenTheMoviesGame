#include "hooks/DecadeTracker.hpp"
#include "hooks/HookManager.hpp"
#include "core/Logging.hpp"

#include <windows.h>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstring>

// Every offset below comes from the Ghidra work documented in docs/MOVIE_SUCCESS.md
// and docs/MOVIE_QUALITY.md (VA - 0x400000 = RVA). All memory reads are SEH-guarded:
// a wrong guess logs nothing instead of crashing a decade-long run.
namespace
{
    // ---- RVAs (VA - 0x400000) ----------------------------------------------
    constexpr uintptr_t RVA_StartRelease      = 0x001af7c0; // CPhaseRelease_StartRelease   (cdecl, project)
    constexpr uintptr_t RVA_AIMovieCreateInc  = 0x001a3240; // AIMovie_CreateIncome         (thiscall, this, char poolZero)
    constexpr uintptr_t RVA_IncomeDailyTick   = 0x001cce10; // CProjectIncome_DailyTick     (thiscall, this)
    constexpr uintptr_t RVA_GetGenreTrend     = 0x001216e0; // AudienceTaste_GetGenreTrend  (thiscall, this, float* out, string* name)
    constexpr uintptr_t RVA_GenrePopSat       = 0x001dd3d0; // Release_ComputeGenrePopularityAndSaturation (cdecl, genre, float* sat) -> ST0
    constexpr uintptr_t RVA_ComputeFinalQual  = 0x001b6fb0; // CProject_ComputeFinalQuality (thiscall, this)
    constexpr uintptr_t RVA_ProjectUpdate     = 0x001b6a30; // CProject_Update              (thiscall, this)
    constexpr uintptr_t RVA_GameClock         = 0x00a4fa4c; // DAT_00e4fa4c: game clock in days (float); year = days / 365

    // ---- phase 2 additions (awards, studio/finance/star/research tracking) ----
    constexpr uintptr_t RVA_AwardJudge        = 0x00451aa0; // CAwardFactory_Judge          (thiscall/fastcall, factory)
    constexpr uintptr_t RVA_AwardSort         = 0x00451450; // sort of the contender vector (cdecl: begin, end, count, cmp)
    constexpr uintptr_t RVA_AwardBonusRecomp  = 0x00460190; // AwardBonuses_RecomputeActiveFromWinners (thiscall, this)
    constexpr uintptr_t RVA_StudioRating      = 0x0010ab70; // CStudio_ComputeStarRating    (fastcall, this) -> this+0x130
    constexpr uintptr_t RVA_StarRating        = 0x00191720; // CStar_ComputeStarRating      (thiscall, star, float* out) ret 4
    constexpr uintptr_t RVA_StudioAITick      = 0x001156b0; // CStudioAI_Tick               (fastcall, this)
    constexpr uintptr_t RVA_PlayerStudioPtr   = 0x00c4bce4; // DAT_0104bce4: player studio object pointer
    constexpr uintptr_t RVA_FinancePtr        = 0x00b87ed8; // DAT_00f87ed8: StudioFinance object pointer
    constexpr uintptr_t RVA_AwardBonusMgrPtr  = 0x00c4f0b0; // DAT_0104f0b0: AwardBonusManager pointer (flags at +0x8c+idx)
    constexpr uintptr_t RVA_ResearchHead      = 0x00c4a740; // DAT_0104a740: first research-list node (sentinel VA 0x0104a74c)
    constexpr uintptr_t VA_ResearchSentinel   = 0x0104a74c;
    constexpr uintptr_t RVA_StudioListHead    = 0x00c4bcf0; // DAT_0104bcf0: first node of the studio list (sentinel VA 0x0104bcfc), node: next +4, item +8
    constexpr uintptr_t VA_StudioListSentinel = 0x0104bcfc;
    constexpr uintptr_t RVA_StudioMgrPtr      = 0x00b88fa8; // DAT_00f88fa8: manager whose list (+0x98, sentinel +0xa4) the studio award factories walk
    constexpr uintptr_t RVA_GetMoneyComp      = 0x0010cfe0; // CStudio_GetMoneyRatingComponent  (thiscall, this, float* out) ret 4
    constexpr uintptr_t RVA_GetAwardsComp     = 0x0010d8e0; // CStudio_GetAwardsRatingComponent (thiscall, this, float* out) ret 4
    constexpr uintptr_t RVA_GetDecayedRep     = 0x0010a860; // CStudio_GetDecayedReputation     (thiscall, this, float* out) ret 4
    constexpr uintptr_t RVA_MeanStuntTake     = 0x001b8a00; // CProject_GetMeanStuntTakeScore   (thiscall, this) -> ST0
    constexpr uintptr_t RVA_MeanStarRelBar    = 0x001b8760; // CProject_GetMeanStarRelationshipBar (thiscall, this, float* out) ret 4
    constexpr uintptr_t RVA_MeanSetRepairBar  = 0x001b8840; // CProject_GetMeanSetRepairBar     (thiscall, this, float* out) ret 4
    constexpr uintptr_t RVA_MeanCrewExpBar    = 0x001b8920; // CProject_GetMeanCrewExperienceBar(thiscall, this, float* out) ret 4
    constexpr uintptr_t RVA_AIMakeMovie       = 0x00115290; // CStudioAI_MakeMovie            (thiscall, this, char)
    constexpr uintptr_t RVA_AIDecideRelease   = 0x001154a0; // CStudioAI_DecideAndReleaseMovie (fastcall, this)
    constexpr uintptr_t RVA_SalaryPayment     = 0x000fd9a0; // CStarContract_GetSalaryPayment (thiscall, this, int64* out) ret 4 -> out
    constexpr uintptr_t RVA_StuntRoll         = 0x000ea1d0; // ShootController_RollStuntOutcome (fastcall, this)
    constexpr uintptr_t RVA_SetMarketingLevel = 0x001b0fe0; // CProject_SetMarketingSpendLevel (thiscall, this, int) ret 4
    constexpr uintptr_t RVA_AssetCondition    = 0x001343d0; // CAsset_UpdateConditionAndDisrepair (fastcall, this)
    constexpr uintptr_t RVA_PlayerMoviesCount = 0x004624e0; // PlayerMovies_Count (cdecl) -> int
    constexpr uintptr_t RVA_PlayerMoviesSum   = 0x00462570; // PlayerMovies_SumQuality (cdecl) -> ST0
    constexpr uintptr_t RVA_PlayerMoviesBest  = 0x00462410; // PlayerMovies_GetHighestQuality (cdecl) -> record*
    constexpr uintptr_t RVA_StarListHead      = 0x00c4d05c; // DAT_0104d05c: first node of the all-stars list (sentinel VA 0x0104d068); node: next +4, item +8
    constexpr uintptr_t VA_StarListSentinel   = 0x0104d068;
    constexpr uintptr_t RVA_DecayClamped      = 0x000950c0; // DecayValue_GetClamped01 (thiscall, this, float* out) ret 4
    constexpr uintptr_t RVA_StarWeights       = 0x00a53e88; // StarRatingWeight_* : salary, relationships, image, trailer, entourage, awards, movies, performance, pressbar
    constexpr uintptr_t RVA_PreProdAdvance    = 0x001ab040; // CPhasePreProduction_Advance  (fastcall, phase) - ends pre-production

    constexpr unsigned long long MAX_FILE_BYTES = 64ull * 1024 * 1024;

    // ---- output ---------------------------------------------------------------
    CRITICAL_SECTION g_cs;
    bool             g_csInit = false;
    HANDLE           g_file = INVALID_HANDLE_VALUE;
    unsigned long long g_bytes = 0;
    volatile bool    g_enabled = false;

    uintptr_t g_base = 0;

    template <class T>
    bool Rd(uintptr_t addr, T* out)
    {
        __try { *out = *reinterpret_cast<const T*>(addr); return true; }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    template <class T>
    T RdOr(uintptr_t addr, T fallback)
    {
        T v;
        return Rd(addr, &v) ? v : fallback;
    }

    float GameYear()
    {
        float days = 0.f;
        if (!g_base || !Rd(g_base + RVA_GameClock, &days)) return -1.f;
        return days / 365.0f;
    }

    // Reads a game string (char* ptr, uint32 len) into out.
    bool ReadGameString(uintptr_t strAddr, char* out, size_t outSize)
    {
        out[0] = 0;
        __try
        {
            auto ptr = *reinterpret_cast<const char* const*>(strAddr);
            auto len = *reinterpret_cast<const uint32_t*>(strAddr + 4);
            if (!ptr || len > 200) return false;
            size_t n = len < outSize - 1 ? len : outSize - 1;
            for (size_t i = 0; i < n; ++i) { char c = ptr[i]; out[i] = (c >= 0x20 && c <= 0x7e) ? c : '?'; }
            out[n] = 0;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    // Genre object: name string lives at +0x8c (FUN_00449b40 = obj + 0x8c).
    void GenreName(uintptr_t genreObj, char* out, size_t n)
    {
        if (!genreObj || !ReadGameString(genreObj + 0x8c, out, n)) strcpy_s(out, n, "?");
    }

    void Line(const char* fmt, ...)
    {
        if (!g_enabled || g_file == INVALID_HANDLE_VALUE) return;
        char buf[900];
        int p = sprintf_s(buf, "year=%.4f,tick=%llu,", GameYear(), (unsigned long long)GetTickCount64());
        va_list ap; va_start(ap, fmt);
        int q = vsnprintf(buf + p, sizeof(buf) - p - 2, fmt, ap);
        va_end(ap);
        if (q < 0) return;
        int len = p + q;
        if (len > (int)sizeof(buf) - 2) len = (int)sizeof(buf) - 2;
        buf[len++] = '\n';
        EnterCriticalSection(&g_cs);
        if (g_bytes + len < MAX_FILE_BYTES)
        {
            DWORD w = 0;
            WriteFile(g_file, buf, (DWORD)len, &w, nullptr);
            g_bytes += w;
        }
        LeaveCriticalSection(&g_cs);
    }

    double ProjectCostTotal(uintptr_t project)
    {
        uintptr_t costs = RdOr<uintptr_t>(project + 0x240, 0);
        return costs ? RdOr<long long>(costs + 0x70, 0) / 8388608.0 : -1.0;
    }

    // ---- shared readers for the success snapshot / income record -----------------
    void LogSuccessAndIncome(const char* ev, uintptr_t successObj, uintptr_t incomeObj)
    {
        float s = RdOr<float>(successObj + 0x90, -1.f), pi = RdOr<float>(successObj + 0x94, -1.f),
              sr = RdOr<float>(successObj + 0x98, -1.f), gp = RdOr<float>(successObj + 0x9c, -1.f),
              bo = RdOr<float>(successObj + 0xa0, -1.f), tp = RdOr<float>(successObj + 0xa4, -1.f),
              meanB = RdOr<float>(successObj + 0xa8, -1.f), setB = RdOr<float>(successObj + 0xac, -1.f),
              castB = RdOr<float>(successObj + 0xb0, -1.f);
        long long pool = RdOr<long long>(incomeObj + 0x90, -1), init = RdOr<long long>(incomeObj + 0x98, -1),
                  adder = RdOr<long long>(incomeObj + 0xa0, -1);
        float pct = RdOr<float>(incomeObj + 0xa8, -1.f), mul = RdOr<float>(incomeObj + 0xac, -1.f);
        Line("ev=%s_FACTORS,S=%.5f,PI=%.4f,SR=%.4f,GP=%.4f,BO=%.4f,TP=%.3f,meanBoredom=%.4f,setBoredom=%.4f,castBoredom=%.4f,"
             "pool=%.2f,initialPool=%.2f,adderMax=%.2f,dailyPct=%.6f,dailyMul=%.6f",
             ev, s, pi, sr, gp, bo, tp, meanB, setB, castB,
             pool / 8388608.0, init / 8388608.0, adder / 8388608.0, pct, mul);
    }

    void DumpResearch(const char* reason); // defined below
    void CheckBonusFlags(const char* why);
    void DumpStudioComponents(const char* why);
    void DumpEntryVtables(const char* why);
    uintptr_t Ptr(uintptr_t rva);
    void DumpConstants();
    void LogAchievementProgress();
    void LogStarComponents();
    void LogFactorySlots(uintptr_t factory);

    typedef void(__fastcall* FloatOut_t)(void*, void*, float*);
    typedef float(__fastcall* FloatRet_t)(void*);

    // Calls a "thiscall(this, float* out) ret 4" getter inside SEH; returns NaN-ish -999 on failure.
    float CallFloatOut(uintptr_t rva, uintptr_t self)
    {
        float v = -999.f;
        __try { ((FloatOut_t)(g_base + rva))(reinterpret_cast<void*>(self), nullptr, &v); }
        __except (EXCEPTION_EXECUTE_HANDLER) { v = -998.f; }
        return v;
    }

    // ---- 1) player release ---------------------------------------------------------
    typedef void* (__cdecl* StartRelease_t)(void*);
    StartRelease_t Orig_StartRelease = nullptr;

    void* __cdecl Det_StartRelease(void* project)
    {
        void* r = Orig_StartRelease(project);
        uintptr_t p = reinterpret_cast<uintptr_t>(project);
        if (g_enabled && p)
        {
            uintptr_t baseGenre = RdOr<uintptr_t>(p + 0x1ac, 0);
            char gname[64]; GenreName(baseGenre, gname, sizeof(gname));
            Line("ev=REL_PLAYER,proj=%p,qualitySnap=%.5f,boostStar=%u,boostDirector=%u,hype=%.4f,D=%.4f,marketingLevel=%d,"
                 "ticksInPreProd=%d,starRating=%.4f,baseGenre=%s,projDate2c8=%.4f,costTotal=%.2f",
                 project, RdOr<float>(p + 0x360, -1.f), (unsigned)RdOr<uint8_t>(p + 0x40d, 0),
                 (unsigned)RdOr<uint8_t>(p + 0x40e, 0), RdOr<float>(p + 0x368, -1.f), RdOr<float>(p + 0x36c, -1.f),
                 RdOr<int>(p + 0x370, -1), RdOr<int>(p + 0x35c, -1), RdOr<float>(p + 0x170, -1.f), gname,
                 RdOr<float>(p + 0x2c8, -1.f) / 365.0f, ProjectCostTotal(p));
            LogSuccessAndIncome("REL_PLAYER", RdOr<uintptr_t>(p + 0x388, 0), RdOr<uintptr_t>(p + 0x3a0, 0));
            {
                float stunt = -999.f;
                __try { stunt = ((FloatRet_t)(g_base + RVA_MeanStuntTake))(project); }
                __except (EXCEPTION_EXECUTE_HANDLER) { stunt = -998.f; }
                Line("ev=REL_PLAYER_BARS,proj=%p,starRelationship=%.4f,setRepair=%.4f,crewExperience=%.4f,meanStuntTake=%.4f,"
                     "stuntCount=%d,marketingLevel=%d",
                     project, CallFloatOut(RVA_MeanStarRelBar, p), CallFloatOut(RVA_MeanSetRepairBar, p),
                     CallFloatOut(RVA_MeanCrewExpBar, p), stunt,
                     (int)((RdOr<uintptr_t>(p + 0x354, 0) - RdOr<uintptr_t>(p + 0x350, 0)) / 0x18), RdOr<int>(p + 0x370, -1));
            }
            DumpResearch("release");
            CheckBonusFlags("release");
        }
        return r;
    }

    // ---- 2) AI release -----------------------------------------------------------------
    typedef void*(__fastcall* AICreateIncome_t)(void*, void*, char);
    AICreateIncome_t Orig_AICreateIncome = nullptr;

    void* __fastcall Det_AICreateIncome(void* self, void* edx, char poolZero)
    {
        void* ret = Orig_AICreateIncome(self, edx, poolZero);
        uintptr_t m = reinterpret_cast<uintptr_t>(self);
        if (g_enabled && m)
        {
            char gname[64]; GenreName(RdOr<uintptr_t>(m + 0x10c, 0), gname, sizeof(gname));
            Line("ev=REL_AI,movie=%p,quality=%.5f,hype=%.4f,genre=%s,poolZero=%d",
                 self, RdOr<float>(m + 0x110, -1.f), RdOr<float>(m + 0x118, -1.f), gname, (int)poolZero);
            LogSuccessAndIncome("REL_AI", RdOr<uintptr_t>(m + 0x16c, 0), RdOr<uintptr_t>(m + 0x184, 0));
        }
        return ret;
    }

    // ---- 3) daily income payout ------------------------------------------------------------
    struct IncomeState { uintptr_t key; int days; };
    IncomeState g_income[64];

    typedef void*(__fastcall* IncomeTick_t)(void*);
    IncomeTick_t Orig_IncomeTick = nullptr;

    void* __fastcall Det_IncomeTick(void* self)
    {
        uintptr_t p = reinterpret_cast<uintptr_t>(self);
        long long before = g_enabled ? RdOr<long long>(p + 0x90, -1) : -1;
        void* ret = Orig_IncomeTick(self);
        if (!g_enabled || before < 0) return ret;
        long long after = RdOr<long long>(p + 0x90, -1);
        if (after == before) return ret; // not a payout day

        EnterCriticalSection(&g_cs);
        IncomeState* st = nullptr;
        IncomeState* freeSlot = nullptr;
        for (auto& e : g_income)
        {
            if (e.key == p) { st = &e; break; }
            if (!e.key && !freeSlot) freeSlot = &e;
        }
        if (!st && freeSlot) { st = freeSlot; st->key = p; st->days = 0; }
        int day = st ? ++st->days : 0;
        bool finished = (after <= 0);
        if (finished && st) st->key = 0;
        LeaveCriticalSection(&g_cs);

        // first 5 payout days, then every 30th, plus the final one
        if (day <= 5 || day % 30 == 0 || finished || !st)
        {
            Line("ev=PAYOUT,income=%p,payoutDay=%d,payout=%.2f,poolAfter=%.2f,initialPool=%.2f,dailyPct=%.6f,dailyMul=%.6f",
                 self, day, (before - after) / 8388608.0, after / 8388608.0, RdOr<long long>(p + 0x98, -1) / 8388608.0,
                 RdOr<float>(p + 0xa8, -1.f), RdOr<float>(p + 0xac, -1.f));
        }
        return ret;
    }

    // ---- 4) genre trend (deduplicated per genre name) -------------------------------------------
    struct GenreTrendState { char name[40]; float last; bool used; };
    GenreTrendState g_trend[24];

    // NOTE: the real function returns the out pointer in EAX (the caller dereferences it),
    // although Ghidra shows it as void - the detour must pass EAX through.
    typedef float*(__fastcall* GetGenreTrend_t)(void*, void*, float*, void*);
    GetGenreTrend_t Orig_GetGenreTrend = nullptr;

    float* __fastcall Det_GetGenreTrend(void* self, void* edx, float* out, void* name)
    {
        float* ret = Orig_GetGenreTrend(self, edx, out, name);
        if (!g_enabled || !out || !name) return ret;
        float v = RdOr<float>(reinterpret_cast<uintptr_t>(out), -1.f);
        char nm[40];
        if (!ReadGameString(reinterpret_cast<uintptr_t>(name), nm, sizeof(nm))) return ret;
        bool doLog = false;
        EnterCriticalSection(&g_cs);
        GenreTrendState* st = nullptr;
        for (auto& e : g_trend) { if (e.used && strcmp(e.name, nm) == 0) { st = &e; break; } }
        if (!st) for (auto& e : g_trend) if (!e.used) { st = &e; st->used = true; strcpy_s(st->name, nm); st->last = -9.f; break; }
        if (st && (st->last < -1.f || v - st->last >= 0.03f || st->last - v >= 0.03f)) { st->last = v; doLog = true; }
        LeaveCriticalSection(&g_cs);
        if (doLog) Line("ev=TREND,genre=%s,trend=%.4f", nm, v);
        return ret;
    }

    // ---- 5) genre popularity & saturation (deduplicated per genre handle) -----------------------
    struct SatState { int genre; float last; bool used; };
    SatState g_sat[24];

    typedef double(__cdecl* GenrePopSat_t)(int, float*);
    GenrePopSat_t Orig_GenrePopSat = nullptr;

    double __cdecl Det_GenrePopSat(int genre, float* outSat)
    {
        double gp = Orig_GenrePopSat(genre, outSat);
        if (g_enabled && outSat)
        {
            float sat = RdOr<float>(reinterpret_cast<uintptr_t>(outSat), -1.f);
            bool doLog = false;
            EnterCriticalSection(&g_cs);
            SatState* st = nullptr;
            for (auto& e : g_sat) { if (e.used && e.genre == genre) { st = &e; break; } }
            if (!st) for (auto& e : g_sat) if (!e.used) { st = &e; st->used = true; st->genre = genre; st->last = -9.f; break; }
            if (st && (st->last < -1.f || sat - st->last >= 0.02f || st->last - sat >= 0.02f)) { st->last = sat; doLog = true; }
            LeaveCriticalSection(&g_cs);
            if (doLog)
            {
                char gname[64]; GenreName(static_cast<uintptr_t>(genre), gname, sizeof(gname));
                Line("ev=SATURATION,genre=%s,saturation=%.4f,popularityTimesSaturation=%.4f", gname, sat, gp);
            }
        }
        return gp;
    }

    // ---- 6) entering post-production: final quality from per-shot records ----------------------
    typedef void*(__fastcall* ComputeFinalQuality_t)(void*);
    ComputeFinalQuality_t Orig_ComputeFinalQuality = nullptr;

    void* __fastcall Det_ComputeFinalQuality(void* self)
    {
        void* ret = Orig_ComputeFinalQuality(self);
        uintptr_t p = reinterpret_cast<uintptr_t>(self);
        if (!g_enabled || !p) return ret;
        uintptr_t pre = RdOr<uintptr_t>(p + 0x348, 0);
        uintptr_t b = RdOr<uintptr_t>(p + 0x350, 0), e = RdOr<uintptr_t>(p + 0x354, 0);
        int n = (b && e >= b) ? (int)((e - b) / 0x18) : -1;
        Line("ev=POSTPROD,proj=%p,finalQuality=%.5f,ticksInPreProd=%d,qPre=%.5f,preProdFactor=%.4f,shots=%d,costTotal=%.2f",
             self, RdOr<float>(p + 0x360, -1.f), RdOr<int>(p + 0x35c, -1), pre ? RdOr<float>(pre + 0x90, -1.f) : -1.f,
             RdOr<float>(p + 0x2c4, -1.f), n, ProjectCostTotal(p));
        for (int i = 0; i < n && i < 80; ++i)
        {
            uintptr_t node = b + (uintptr_t)i * 0x18;
            uintptr_t rec = RdOr<uintptr_t>(node + 0x14, 0);
            if (!rec) continue;
            uintptr_t ctrl = RdOr<uintptr_t>(rec + 0x74, 0);
            uintptr_t scene = ctrl ? RdOr<uintptr_t>(ctrl + 0x1d8, 0) : 0;
            Line("ev=SHOT,proj=%p,i=%d,q=%.5f,starRel=%.4f,setCond=%.4f,crew=%.4f,weight=%d,takeScore=%.4f",
                 self, i, RdOr<float>(rec + 0x90, -1.f), RdOr<float>(rec + 0xb0, -1.f), RdOr<float>(rec + 0xb4, -1.f),
                 RdOr<float>(rec + 0xb8, -1.f), scene ? RdOr<int>(scene + 0x1f4, -1) : -1,
                 ctrl ? RdOr<float>(ctrl + 0xfc, -1.f) : -1.f);
        }
        return ret;
    }

    // ---- 7) project update rate (per real minute) -----------------------------------------------
    struct UpdSlot { uintptr_t proj; unsigned calls; };
    UpdSlot g_upd[8];
    unsigned g_updTotal = 0;
    unsigned long long g_updLast = 0;

    typedef void*(__fastcall* ProjectUpdate_t)(void*);
    ProjectUpdate_t Orig_ProjectUpdate = nullptr;

    void* __fastcall Det_ProjectUpdate(void* self)
    {
        void* ret = Orig_ProjectUpdate(self);
        if (!g_enabled) return ret;
        {
            // pre-production running cost: every 300 phase ticks while the project is in phase 4
            uintptr_t pr = reinterpret_cast<uintptr_t>(self);
            uintptr_t ph = RdOr<uintptr_t>(pr + 0x228, 0);
            if (ph && RdOr<int>(ph + 0x90, -1) == 4)
            {
                unsigned phaseTicks = RdOr<unsigned>(ph + 0xcc, 0);
                if (phaseTicks % 300 == 0)
                    Line("ev=PREPROD_COST,proj=%p,phaseTicks=%u,preProdFactor=%.4f,suspended=%u,stage=%d,costTotal=%.2f",
                         self, phaseTicks, RdOr<float>(pr + 0x2c4, -1.f), (unsigned)RdOr<uint8_t>(pr + 0x364, 0),
                         RdOr<int>(ph + 0xe8, -1), ProjectCostTotal(pr));
            }
        }
        unsigned long long now = GetTickCount64();
        EnterCriticalSection(&g_cs);
        if (!g_updLast) g_updLast = now;
        ++g_updTotal;
        uintptr_t p = reinterpret_cast<uintptr_t>(self);
        UpdSlot* slot = nullptr;
        for (auto& s : g_upd) { if (s.proj == p) { slot = &s; break; } }
        if (!slot) for (auto& s : g_upd) if (!s.proj) { slot = &s; s.proj = p; break; }
        if (slot) ++slot->calls;
        bool report = (now - g_updLast) >= 60000ull;
        UpdSlot snap[8]; unsigned total = 0; unsigned long long dt = 0;
        if (report)
        {
            memcpy(snap, g_upd, sizeof(snap)); total = g_updTotal; dt = now - g_updLast;
            memset(g_upd, 0, sizeof(g_upd)); g_updTotal = 0; g_updLast = now;
        }
        LeaveCriticalSection(&g_cs);
        if (report)
        {
            Line("ev=UPDATE_RATE,seconds=%.1f,totalCalls=%u,callsPerSecond=%.2f", dt / 1000.0, total, total * 1000.0 / dt);
            for (auto& s : snap)
            {
                if (!s.proj) continue;
                uintptr_t phase = RdOr<uintptr_t>(s.proj + 0x228, 0);
                Line("ev=UPDATE_RATE_PROJECT,proj=%p,phaseId=%d,callsPerSecond=%.2f,suspended=%u",
                     (void*)s.proj, phase ? RdOr<int>(phase + 0x90, -1) : -1, s.calls * 1000.0 / dt,
                     (unsigned)RdOr<uint8_t>(s.proj + 0x364, 0));
            }
        }
        return ret;
    }

    // =====================================================================================
    // Phase 2: research dump, finance/studio monthly snapshot, awards, stars
    // =====================================================================================
    uintptr_t Ptr(uintptr_t rva) { return RdOr<uintptr_t>(g_base + rva, 0); }

    // ---- research items (moviemaking pioneer window etc.): log only when an item changes ----
    struct ResState { uintptr_t item; int cat; uint8_t flag; float a4, t134; bool used; };
    ResState g_res[160];

    void DumpResearch(const char* reason)
    {
        uintptr_t node = RdOr<uintptr_t>(g_base + RVA_ResearchHead, 0);
        float nowDays = RdOr<float>(g_base + RVA_GameClock, -1.f);
        int pioneerCount = 0; float pioneerEnd = -1.f, pioneerStart = 1e9f; uintptr_t pioneerItem = 0;
        for (int guard = 0; node && node != VA_ResearchSentinel && guard < 400; ++guard)
        {
            uintptr_t item = RdOr<uintptr_t>(node + 8, 0);
            node = RdOr<uintptr_t>(node + 4, 0);
            if (!item) continue;
            int cat = RdOr<int>(item + 0xa0, -1);
            uint8_t flag = RdOr<uint8_t>(item + 0x10b, 255);
            float a4 = RdOr<float>(item + 0xa4, -1.f), t134 = RdOr<float>(item + 0x134, -1.f);
            // same test as CStudioPlayer_HasActivePioneerTechnology: moviemaking (category 0), flag==0, t134 <= now < a4
            if (cat == 0 && flag == 0 && t134 <= nowDays && nowDays < a4)
            {
                ++pioneerCount;
                if (a4 > pioneerEnd) { pioneerEnd = a4; pioneerItem = item; }
                if (t134 < pioneerStart) pioneerStart = t134;
            }
            ResState* st = nullptr;
            EnterCriticalSection(&g_cs);
            for (auto& e : g_res) { if (e.used && e.item == item) { st = &e; break; } }
            bool changed = false;
            if (!st) { for (auto& e : g_res) if (!e.used) { st = &e; e.used = true; e.item = item; changed = true; break; } }
            else if (st->cat != cat || st->flag != flag || st->a4 != a4 || st->t134 != t134) changed = true;
            if (st) { st->cat = cat; st->flag = flag; st->a4 = a4; st->t134 = t134; }
            LeaveCriticalSection(&g_cs);
            if (changed)
                Line("ev=RESEARCH,why=%s,item=%p,category=%d,flag10b=%u,a4Year=%.4f,t134Year=%.4f,"
                     "dwords=%08X/%08X/%08X/%08X",
                     reason, (void*)item, cat, (unsigned)flag, a4 / 365.0f, t134 / 365.0f,
                     RdOr<unsigned>(item + 0x98, 0), RdOr<unsigned>(item + 0x9c, 0), RdOr<unsigned>(item + 0xa8, 0),
                     RdOr<unsigned>(item + 0x130, 0));
        }
        Line("ev=PIONEER,why=%s,active=%d,items=%d,latestEndYear=%.4f,earliestStartYear=%.4f,item=%p", reason,
             pioneerCount > 0, pioneerCount, pioneerEnd / 365.0f, pioneerCount ? pioneerStart / 365.0f : -1.f,
             (void*)pioneerItem);
    }

    // ---- bonus flags: log every change, plus the full 24-flag snapshot ------------------------------
    char g_lastFlags[32] = {0};
    void CheckBonusFlags(const char* why)
    {
        uintptr_t mgr = Ptr(RVA_AwardBonusMgrPtr);
        if (!mgr) return;
        char flags[32];
        for (int i = 0; i < 24; ++i) flags[i] = '0' + (RdOr<uint8_t>(mgr + 0x8c + i, 0) ? 1 : 0);
        flags[24] = 0;
        if (strcmp(flags, g_lastFlags) != 0)
        {
            Line("ev=BONUS_FLAGS_CHANGED,why=%s,old=%s,new=%s", why, g_lastFlags[0] ? g_lastFlags : "-", flags);
            strcpy_s(g_lastFlags, flags);
        }
    }

    // ---- ceremony: every studio's rating components (reputation / money / awards) -----------------------------
    void DumpStudioComponents(const char* why)
    {
        uintptr_t node = RdOr<uintptr_t>(g_base + RVA_StudioListHead, 0);
        uintptr_t player = Ptr(RVA_PlayerStudioPtr);
        for (int guard = 0; node && node != VA_StudioListSentinel && guard < 64; ++guard)
        {
            uintptr_t st = RdOr<uintptr_t>(node + 8, 0);
            node = RdOr<uintptr_t>(node + 4, 0);
            if (!st) continue;
            Line("ev=STUDIO_COMPONENTS,why=%s,studio=%p,isPlayer=%d,rating=%.4f,decayedRep=%.4f,repBase=%.4f,money=%.4f,awards=%.4f,"
                 "capitalOrBalance=%.2f,awardsOwned+0x128=%d",
                 why, (void*)st, (int)(st == player), RdOr<float>(st + 0x130, -1.f), CallFloatOut(RVA_GetDecayedRep, st),
                 RdOr<float>(st + 0x138, -1.f), CallFloatOut(RVA_GetMoneyComp, st), CallFloatOut(RVA_GetAwardsComp, st),
                 RdOr<long long>(st + 0x218, 0) / 8388608.0, RdOr<int>(st + 0x128, -1));
        }
    }

    // ---- ceremony: vtable slots of the objects the studio award factories walk (for the next decompile round) --------
    bool g_entryVtDone = false;
    void DumpEntryVtables(const char* why)
    {
        if (g_entryVtDone) return;
        uintptr_t mgr = Ptr(RVA_StudioMgrPtr);
        if (!mgr) return;
        g_entryVtDone = true;
        uintptr_t node = RdOr<uintptr_t>(mgr + 0x98, 0);
        for (int guard = 0; node && node != mgr + 0xa4 && guard < 12; ++guard)
        {
            uintptr_t obj = RdOr<uintptr_t>(node + 8, 0);
            node = RdOr<uintptr_t>(node + 4, 0);
            uintptr_t vt = obj ? RdOr<uintptr_t>(obj, 0) : 0;
            if (!vt) continue;
            Line("ev=AWARD_ENTRY_VTABLE,why=%s,obj=%p,vtable=%p,s1=%p,s6=%p,s7=%p,s10=%p,s12=%p,d4=%08X,d8=%08X,dc=%08X",
                 why, (void*)obj, (void*)vt, (void*)RdOr<uintptr_t>(vt + 4, 0), (void*)RdOr<uintptr_t>(vt + 0x18, 0),
                 (void*)RdOr<uintptr_t>(vt + 0x1c, 0), (void*)RdOr<uintptr_t>(vt + 0x28, 0),
                 (void*)RdOr<uintptr_t>(vt + 0x30, 0), RdOr<unsigned>(obj + 4, 0), RdOr<unsigned>(obj + 8, 0),
                 RdOr<unsigned>(obj + 0xc, 0));
        }
    }

    // ---- monthly snapshots --------------------------------------------------------------------
    long g_lastMonth = -1;
    struct AiMonth { uintptr_t studio; long month; };
    AiMonth g_aiMonth[48];

    void LogFinance()
    {
        uintptr_t f = Ptr(RVA_FinancePtr);
        if (!f) return;
        auto m = [&](uintptr_t off) { return RdOr<long long>(f + off, 0) / 8388608.0; };
        Line("ev=FINANCE,balance=%.2f,totalIncome=%.2f,totalExpense=%.2f,"
             "inc0=%.2f,inc1=%.2f,inc2=%.2f,inc3=%.2f,inc4=%.2f,inc5=%.2f,inc6=%.2f,inc7=%.2f,"
             "exp0=%.2f,exp1=%.2f,exp2=%.2f,exp3=%.2f,exp4=%.2f,exp5=%.2f,exp6=%.2f,exp7=%.2f",
             m(0x90), m(0x160), m(0x118),
             m(0x120), m(0x128), m(0x130), m(0x138), m(0x140), m(0x148), m(0x150), m(0x158),
             m(0xd8), m(0xe0), m(0xe8), m(0xf0), m(0xf8), m(0x100), m(0x108), m(0x110));
    }

    void LogPlayerStudio()
    {
        uintptr_t s = Ptr(RVA_PlayerStudioPtr);
        if (!s) return;
        Line("ev=STUDIO_PLAYER,studio=%p,rating=%.4f,repBase=%.4f,repYear=%.4f", (void*)s, RdOr<float>(s + 0x130, -1.f),
             RdOr<float>(s + 0x138, -1.f), RdOr<float>(s + 0x13c, -1.f) / 365.0f);
    }

    // Called from game-thread hooks; does the monthly work once per game month.
    void MaybeMonthly()
    {
        float days = 0.f;
        if (!Rd(g_base + RVA_GameClock, &days) || days <= 0.f) return;
        long month = (long)(days / 30.4375f);
        if (month == g_lastMonth) return;
        g_lastMonth = month;
        LogFinance();
        LogPlayerStudio();
        DumpResearch("monthly");
        CheckBonusFlags("monthly");
        DumpConstants();
        LogAchievementProgress();
        LogStarComponents();
        if (month % 3 == 0)
        {
            // quarterly: forget the last logged genre trend / saturation so the next lookups are logged again
            for (auto& e : g_trend) e.last = -9.f;
            for (auto& e : g_sat) e.last = -9.f;
            DumpStudioComponents("quarterly");
        }
    }

    void AiMonthly(uintptr_t studio)
    {
        float days = 0.f;
        if (!Rd(g_base + RVA_GameClock, &days)) return;
        long month = (long)(days / 30.4375f);
        AiMonth* slot = nullptr;
        for (auto& e : g_aiMonth) { if (e.studio == studio) { slot = &e; break; } }
        if (!slot) for (auto& e : g_aiMonth) if (!e.studio) { slot = &e; e.studio = studio; e.month = -1; break; }
        if (!slot || slot->month == month) return;
        slot->month = month;
        Line("ev=STUDIO_AI,studio=%p,rating=%.4f,repBase=%.4f,repYear=%.4f,capital=%.2f,happiness=%.4f,"
             "successDiff=%.4f,origPrestige=%.4f,prLevel=%.4f,prVar=%.4f",
             (void*)studio, RdOr<float>(studio + 0x130, -1.f), RdOr<float>(studio + 0x138, -1.f),
             RdOr<float>(studio + 0x13c, -1.f) / 365.0f, RdOr<long long>(studio + 0x218, 0) / 8388608.0,
             RdOr<float>(studio + 0x264, -1.f), RdOr<float>(studio + 0x298, -1.f), RdOr<float>(studio + 0x26c, -1.f),
             RdOr<float>(studio + 0x288, -1.f), RdOr<float>(studio + 0x28c, -1.f));
    }

    // ---- studio star rating (player + AI): log when it moves ----------------------------------------
    struct RateState { uintptr_t obj; float last; };
    RateState g_studioRate[48];

    typedef void*(__fastcall* StudioRating_t)(void*);
    StudioRating_t Orig_StudioRating = nullptr;
    void* __fastcall Det_StudioRating(void* self)
    {
        void* ret = Orig_StudioRating(self);
        if (!g_enabled) return ret;
        uintptr_t o = reinterpret_cast<uintptr_t>(self);
        float r = RdOr<float>(o + 0x130, -1.f);
        bool doLog = false;
        EnterCriticalSection(&g_cs);
        RateState* st = nullptr;
        for (auto& e : g_studioRate) { if (e.obj == o) { st = &e; break; } }
        if (!st) for (auto& e : g_studioRate) if (!e.obj) { st = &e; e.obj = o; e.last = -9.f; break; }
        if (st && (st->last < -1.f || r - st->last >= 0.01f || st->last - r >= 0.01f)) { st->last = r; doLog = true; }
        LeaveCriticalSection(&g_cs);
        if (doLog)
            Line("ev=STUDIO_RATING,studio=%p,isPlayer=%d,rating=%.4f,repBase=%.4f,repYear=%.4f", self,
                 (int)(o == Ptr(RVA_PlayerStudioPtr)), r, RdOr<float>(o + 0x138, -1.f),
                 RdOr<float>(o + 0x13c, -1.f) / 365.0f);
        return ret;
    }

    // ---- star ratings (per star, change >= 0.02) --------------------------------------------------
    struct StarState { uintptr_t star; float last; long month; };
    StarState g_star[400];

    typedef void*(__fastcall* StarRating_t)(void*, void*, float*);
    StarRating_t Orig_StarRating = nullptr;
    void* __fastcall Det_StarRating(void* self, void* edx, float* out)
    {
        void* ret = Orig_StarRating(self, edx, out);
        if (!g_enabled || !out) return ret;
        uintptr_t o = reinterpret_cast<uintptr_t>(self);
        float r = RdOr<float>(reinterpret_cast<uintptr_t>(out), -1.f);
        bool doLog = false;
        EnterCriticalSection(&g_cs);
        StarState* st = nullptr;
        for (auto& e : g_star) { if (e.star == o) { st = &e; break; } }
        if (!st) for (auto& e : g_star) if (!e.star) { st = &e; e.star = o; e.last = -9.f; e.month = -1; break; }
        if (st && (st->last < -1.f || r - st->last >= 0.02f || st->last - r >= 0.02f)) { st->last = r; doLog = true; }
        bool monthLog = false;
        long month = (long)(RdOr<float>(g_base + RVA_GameClock, 0.f) / 30.4375f);
        if (st && st->month != month) { st->month = month; monthLog = true; }
        LeaveCriticalSection(&g_cs);
        if (doLog)
            Line("ev=STAR_RATING,star=%p,rating=%.4f,classId=%d,age?=%.1f,chart934=%.4f", self, r, RdOr<int>(o + 0x4c4, -1),
                 RdOr<float>(o + 0x4a4, -1.f), RdOr<float>(o + 0x934, -1.f));
        else if (monthLog)
            Line("ev=STAR_CHART,star=%p,rating=%.4f,chart934=%.4f", self, r, RdOr<float>(o + 0x934, -1.f));
        return ret;
    }

    // ---- awards: judge context, sorted contender list, active bonuses ---------------------------------
    volatile int g_inJudge = 0;
    uintptr_t g_judgeFactory = 0;
    int g_judgeCategory = -1;
    int g_judgeSeq = 0;

    // Only call a vtable getter if its first instructions really are "...; ret" (no 'ret imm16'):
    // protects against a wrong signature guess corrupting the stack.
    bool SimpleGetter(uintptr_t fn)
    {
        __try
        {
            const uint8_t* c = reinterpret_cast<const uint8_t*>(fn);
            for (int i = 0; i < 24; ++i)
            {
                if (c[i] == 0xC3) return true;
                if (c[i] == 0xC2) return false;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {}
        return false;
    }

    typedef void*(__fastcall* Judge_t)(void*);
    Judge_t Orig_Judge = nullptr;
    void* __fastcall Det_Judge(void* self)
    {
        uintptr_t f = reinterpret_cast<uintptr_t>(self);
        g_judgeFactory = f;
        g_judgeCategory = -1;
        uintptr_t vt = RdOr<uintptr_t>(f, 0);
        uintptr_t fn = vt ? RdOr<uintptr_t>(vt + 0xc, 0) : 0;
        if (fn && SimpleGetter(fn))
        {
            __try { g_judgeCategory = ((int(__fastcall*)(void*, void*))fn)(self, nullptr); }
            __except (EXCEPTION_EXECUTE_HANDLER) { g_judgeCategory = -2; }
        }
        ++g_judgeSeq;
        if (g_enabled) LogFactorySlots(f);
        if (g_enabled)
        {
            static float s_lastCeremonyDay = -1e9f;
            float nd = RdOr<float>(g_base + RVA_GameClock, 0.f);
            if (nd - s_lastCeremonyDay > 5.f)
            {
                s_lastCeremonyDay = nd;
                DumpStudioComponents("ceremony");
                DumpEntryVtables("ceremony");
            }
        }
        g_inJudge = 1;
        void* ret = Orig_Judge(self);
        g_inJudge = 0;
        return ret;
    }

    typedef void*(__cdecl* AwardSort_t)(void*, void*, int, void*);
    AwardSort_t Orig_AwardSort = nullptr;
    void* __cdecl Det_AwardSort(void* begin, void* end, int count, void* cmp)
    {
        void* ret = Orig_AwardSort(begin, end, count, cmp);
        if (g_enabled && g_inJudge)
        {
            uintptr_t b = reinterpret_cast<uintptr_t>(begin), e = reinterpret_cast<uintptr_t>(end);
            int n = (b && e >= b) ? (int)((e - b) / 0x34) : -1;
            uintptr_t player = Ptr(RVA_PlayerStudioPtr);
            Line("ev=AWARD_JUDGE,seq=%d,category=%d,factoryVtable=%p,entries=%d,count=%d", g_judgeSeq, g_judgeCategory,
                 (void*)RdOr<uintptr_t>(g_judgeFactory, 0), n, count);
            for (int i = 0; i < n && i < 15; ++i)
            {
                uintptr_t en = b + (uintptr_t)i * 0x34;
                uintptr_t contender = RdOr<uintptr_t>(en + 0x2c, 0);
                Line("ev=AWARD_ENTRY,seq=%d,rank=%d,id=%d,score=%.5f,contender=%p,isPlayerStudio=%d,"
                     "dwords=%08X/%08X/%08X/%08X,idChart934=%.4f",
                     g_judgeSeq, i, RdOr<int>(en + 0x14, -1), RdOr<float>(en + 0x30, -1.f), (void*)contender,
                     (int)(contender && contender == player), RdOr<unsigned>(en, 0), RdOr<unsigned>(en + 4, 0),
                     RdOr<unsigned>(en + 0x18, 0), RdOr<unsigned>(en + 0x1c, 0),
                     (g_judgeCategory == 0 || g_judgeCategory == 5) ? RdOr<float>((uintptr_t)RdOr<int>(en + 0x14, 0) + 0x934, -1.f) : -1.f);
            }
        }
        return ret;
    }

    typedef void*(__fastcall* BonusRecomp_t)(void*);
    BonusRecomp_t Orig_BonusRecomp = nullptr;
    void* __fastcall Det_BonusRecomp(void* self)
    {
        void* ret = Orig_BonusRecomp(self);
        if (g_enabled)
        {
            uintptr_t mgr = Ptr(RVA_AwardBonusMgrPtr);
            char flags[32];
            for (int i = 0; i < 24; ++i) flags[i] = mgr ? ('0' + (RdOr<uint8_t>(mgr + 0x8c + i, 0) ? 1 : 0)) : '?';
            flags[24] = 0;
            Line("ev=AWARD_BONUSES,active=%s", flags);
            CheckBonusFlags("recompute");
        }
        return ret;
    }

    typedef void*(__fastcall* PreProdAdvance_t)(void*);
    PreProdAdvance_t Orig_PreProdAdvance = nullptr;
    void* __fastcall Det_PreProdAdvance(void* self)
    {
        if (g_enabled)
        {
            uintptr_t ph = reinterpret_cast<uintptr_t>(self);
            uintptr_t pr = RdOr<uintptr_t>(ph + 0x8c, 0);
            Line("ev=PREPROD_END,proj=%p,phaseTicks=%u,preProdFactor=%.4f,stage=%d,costTotal=%.2f",
                 (void*)pr, RdOr<unsigned>(ph + 0xcc, 0), pr ? RdOr<float>(pr + 0x2c4, -1.f) : -1.f,
                 RdOr<int>(ph + 0xe8, -1), pr ? ProjectCostTotal(pr) : -1.0);
        }
        return Orig_PreProdAdvance(self);
    }


    // =====================================================================================
    // Phase 3: everything needed for the next round of function matching
    // =====================================================================================

    // ---- one-off dump of config-derived globals (maps ini keys to the game's globals) ----------------
    void LogFloats(const char* group, uintptr_t va, int count)
    {
        char buf[600]; int p = 0;
        p += sprintf_s(buf + p, sizeof(buf) - p, "ev=CONSTANTS,group=%s,va=%08X", group, (unsigned)va);
        for (int i = 0; i < count && p < (int)sizeof(buf) - 40; ++i)
            p += sprintf_s(buf + p, sizeof(buf) - p, ",f%d=%.6f", i, RdOr<float>(g_base + (va - 0x400000) + 4 * i, -999.f));
        Line("%s", buf + 0);
    }

    bool g_constantsDone = false;
    void DumpConstants()
    {
        if (g_constantsDone) return;
        g_constantsDone = true;
        LogFloats("experience_table_20", 0x00f87e70, 20);
        LogFloats("stars_exp_decay_interval", 0x00e4fb5c, 2);
        LogFloats("genre_exp_lo_hi", 0x0104d794, 2);
        LogFloats("class10_exp_mult", 0x00e53320, 1);
        LogFloats("quality_calc_tuning_104d790", 0x0104d790, 20);   // mood min/max (0x104D79C/A0), mood step (0x104D7CC), genre exp range ...
        LogFloats("mood_thresholds_d26eac", 0x00d26eac, 2);          // CStar_ChooseNextActivityByMood thresholds
        LogFloats("studio_rating_weights_and_decay", 0x00e521b4, 3);
        LogFloats("studio_rep_decay_k", 0x00e52188, 1);
        LogFloats("money_award_component_consts", 0x00d21494, 1);
        LogFloats("money_step_award_scale", 0x00d1c488, 1);
        LogFloats("award_comp_scale", 0x00d214a8, 1);
        LogFloats("stunt_perf_a", 0x00e54b20, 4);
        LogFloats("stunt_perf_b", 0x00e54b48, 2);
        LogFloats("stunt_success_block", 0x0104ada8, 6);   // luckycharm, high, med, low, (pad), min
        LogFloats("stunt_ability_block", 0x0104adbc, 5);   // max, min, (chance) ..., health ability, threshold
        LogFloats("stunt_injury_block", 0x0104ad90, 5);
        LogFloats("ai_rules_a", 0x0104bd70, 12);           // accumulator, diff mult, dev mult, rival.., thresholds
        LogFloats("ai_rules_b", 0x0104bd98, 3);
        LogFloats("award_bonus_values_a", 0x0104f030, 8);
        LogFloats("award_bonus_values_b", 0x0104f050, 16);
        // review era leniency table: entries of (int year, float factor) between two pointers
        uintptr_t b = RdOr<uintptr_t>(g_base + (0x01049204 - 0x400000), 0), e = RdOr<uintptr_t>(g_base + (0x01049208 - 0x400000), 0);
        // the globals hold game-absolute pointers; read entries directly
        char buf[600]; int p = sprintf_s(buf, sizeof(buf), "ev=CONSTANTS,group=review_leniency");
        for (uintptr_t a = b; a && a + 8 <= e && p < (int)sizeof(buf) - 40; a += 8)
            p += sprintf_s(buf + p, sizeof(buf) - p, ",y%d=%.4f", RdOr<int>(a, -1), RdOr<float>(a + 4, -1.f));
        Line("%s", buf);
    }

    // ---- lifetime achievement progress (monthly) ------------------------------------------------------
    void LogAchievementProgress()
    {
        int count = -1; double sum = -1; uintptr_t best = 0;
        __try { count = ((int(__cdecl*)())(g_base + RVA_PlayerMoviesCount))(); } __except (EXCEPTION_EXECUTE_HANDLER) {}
        __try { sum = ((double(__cdecl*)())(g_base + RVA_PlayerMoviesSum))(); } __except (EXCEPTION_EXECUTE_HANDLER) {}
        __try { best = ((uintptr_t(__cdecl*)())(g_base + RVA_PlayerMoviesBest))(); } __except (EXCEPTION_EXECUTE_HANDLER) {}
        uintptr_t f = Ptr(RVA_FinancePtr);
        Line("ev=ACHIEVEMENT_PROGRESS,movieCount=%d,sumRating=%.4f,bestRating=%.4f,balance=%.2f,boxOfficeIncome=%.2f,studioRating=%.4f",
             count, sum, best ? RdOr<float>(best + 0xb4, -1.f) : -1.f,
             f ? RdOr<long long>(f + 0x90, 0) / 8388608.0 : -1.0, f ? RdOr<long long>(f + 0x120, 0) / 8388608.0 : -1.0,
             RdOr<float>(Ptr(RVA_PlayerStudioPtr) + 0x130, -1.f));
    }

    // ---- star rating: the nine components of CStar_ComputeStarRating for every star the player owns (monthly) -----------
    float Clamp01(float v) { return v < 0.f ? 0.f : (v > 1.f ? 1.f : v); }

    void LogStarComponents()
    {
        uintptr_t player = Ptr(RVA_PlayerStudioPtr);
        float w[9];
        for (int i = 0; i < 9; ++i) w[i] = RdOr<float>(g_base + RVA_StarWeights + 4 * i, 0.f);
        uintptr_t node = RdOr<uintptr_t>(g_base + RVA_StarListHead, 0);
        for (int guard = 0; node && node != VA_StarListSentinel && guard < 600; ++guard)
        {
            uintptr_t st = RdOr<uintptr_t>(node + 8, 0);
            node = RdOr<uintptr_t>(node + 4, 0);
            if (!st || RdOr<uintptr_t>(st + 0x934, 0) != player) continue;     // only stars owned by the player's studio
            float salary = RdOr<float>(st + 0xd20, -1.f), rel = RdOr<float>(st + 0xd1c, -1.f), image = RdOr<float>(st + 0xd18, -1.f),
                  trailer = RdOr<float>(st + 0xd24, -1.f), entourage = RdOr<float>(st + 0xd14, -1.f), awards = RdOr<float>(st + 0xcd4, -1.f);
            float movies = CallFloatOut(RVA_DecayClamped, st + 0xbd0), perf = CallFloatOut(RVA_DecayClamped, st + 0xbdc);
            uintptr_t bar = RdOr<uintptr_t>(st + 0xd10, 0);
            float press = bar ? Clamp01(RdOr<float>(bar + 0xc0, 0.f)) : RdOr<float>(st + 0xd38, -1.f);
            float base = RdOr<float>(st + 0xccc, 0.f), rating = RdOr<float>(st + 0xcd0, -1.f);
            // the same accumulation CStar_ComputeStarRating does (cached components, so this can differ slightly from the live rating)
            float comp[9] = {salary, rel, image, trailer, entourage, awards, movies, perf, press};
            float S = 0.f;
            for (int i = 0; i < 9; ++i) S = Clamp01(S + Clamp01(w[i] * comp[i]));
            float predicted = Clamp01(S + base);
            Line("ev=STAR_COMPONENTS,star=%p,rating=%.4f,predicted=%.4f,salary=%.4f,relationships=%.4f,image=%.4f,trailer=%.4f,"
                 "entourage=%.4f,awards=%.4f,movies=%.4f,performance=%.4f,pressbar=%.4f,base=%.4f",
                 (void*)st, rating, predicted, salary, rel, image, trailer, entourage, awards, movies, perf, press, base);
        }
    }

    // ---- AI: who releases what, and the inputs of the release decision --------------------------------
    typedef void*(__fastcall* AIMakeMovie_t)(void*, void*, char);
    AIMakeMovie_t Orig_AIMakeMovie = nullptr;
    void* __fastcall Det_AIMakeMovie(void* self, void* edx, char flag)
    {
        uintptr_t st = reinterpret_cast<uintptr_t>(self);
        if (g_enabled && st)
            Line("ev=AI_MAKE_MOVIE,studio=%p,successDiff=%.4f,lastReleaseYear=%.4f,prLevel=%.4f,prVar=%.4f,rating=%.4f,flag=%d",
                 self, RdOr<float>(st + 0x298, -1.f), RdOr<float>(st + 0x168, -1.f) / 365.0f, RdOr<float>(st + 0x288, -1.f),
                 RdOr<float>(st + 0x28c, -1.f), RdOr<float>(st + 0x130, -1.f), (int)flag);
        return Orig_AIMakeMovie(self, edx, flag);
    }

    struct AiDecideState { uintptr_t studio; long month; };
    AiDecideState g_aiDecide[48];
    typedef void*(__fastcall* AIDecide_t)(void*);
    AIDecide_t Orig_AIDecide = nullptr;
    void* __fastcall Det_AIDecide(void* self)
    {
        void* r = Orig_AIDecide(self);
        if (!g_enabled) return r;
        uintptr_t st = reinterpret_cast<uintptr_t>(self);
        long month = (long)(RdOr<float>(g_base + RVA_GameClock, 0.f) / 30.4375f);
        bool doLog = false;
        EnterCriticalSection(&g_cs);
        AiDecideState* slot = nullptr;
        for (auto& e : g_aiDecide) { if (e.studio == st) { slot = &e; break; } }
        if (!slot) for (auto& e : g_aiDecide) if (!e.studio) { slot = &e; e.studio = st; e.month = -1; break; }
        if (slot && slot->month != month) { slot->month = month; doLog = true; }
        LeaveCriticalSection(&g_cs);
        if (doLog)
            Line("ev=AI_DECIDE,studio=%p,successDiff=%.4f,lastReleaseYear=%.4f,sinceLastYears=%.3f,extraAccumulator=%.4f",
                 self, RdOr<float>(st + 0x298, -1.f), RdOr<float>(st + 0x168, -1.f) / 365.0f,
                 GameYear() - RdOr<float>(st + 0x168, 0.f) / 365.0f, RdOr<float>(g_base + (0x0104bd70 - 0x400000), -1.f));
        return r;
    }

    // ---- Half Price: salary actually paid versus the stored full salary -----------------------------------
    struct SalSlot { uintptr_t obj; long long paid; };
    SalSlot g_sal[512];
    typedef long long*(__fastcall* SalaryPayment_t)(void*, void*, long long*);
    SalaryPayment_t Orig_SalaryPayment = nullptr;
    long long* __fastcall Det_SalaryPayment(void* self, void* edx, long long* out)
    {
        long long* r = Orig_SalaryPayment(self, edx, out);
        if (!g_enabled || !out) return r;
        uintptr_t o = reinterpret_cast<uintptr_t>(self);
        long long paid = RdOr<long long>(reinterpret_cast<uintptr_t>(out), 0);
        SalSlot& sl = g_sal[(o >> 4) & 511];
        if (sl.obj != o || sl.paid != paid)
        {
            sl.obj = o; sl.paid = paid;
            uintptr_t mgr = Ptr(RVA_AwardBonusMgrPtr);
            Line("ev=SALARY,contract=%p,paid=%.2f,stored0xF0=%.2f,halfPriceFlag=%d", self, paid / 8388608.0,
                 RdOr<long long>(o + 0xf0, 0) / 8388608.0, mgr ? (int)RdOr<uint8_t>(mgr + 0x8c + 13, 0) : -1);
        }
        return r;
    }

    // ---- stunts: every roll ---------------------------------------------------------------------------------
    typedef void*(__fastcall* StuntRoll_t)(void*);
    StuntRoll_t Orig_StuntRoll = nullptr;
    void* __fastcall Det_StuntRoll(void* self)
    {
        void* r = Orig_StuntRoll(self);
        if (!g_enabled) return r;
        uintptr_t c = reinterpret_cast<uintptr_t>(self);
        uintptr_t state = RdOr<uintptr_t>(c + 0x1d8, 0);
        uintptr_t mgr = Ptr(RVA_AwardBonusMgrPtr);
        Line("ev=STUNT_ROLL,ctrl=%p,failed=%d,chance=%.4f,shotScore=%.4f,sceneDifficulty=%.4f,luckyCharm=%d",
             self, (int)RdOr<uint8_t>(c + 0xf0, 255), RdOr<float>(c + 0xf4, -1.f), RdOr<float>(c + 0xf8, -1.f),
             state ? RdOr<float>(state + 0x248, -1.f) : -1.f, mgr ? (int)RdOr<uint8_t>(mgr + 0x8c + 14, 0) : -1);
        return r;
    }

    // ---- marketing level changes: when does D get its value? --------------------------------------------------
    typedef void*(__fastcall* SetMarketingLevel_t)(void*, void*, int);
    SetMarketingLevel_t Orig_SetMarketingLevel = nullptr;
    void* __fastcall Det_SetMarketingLevel(void* self, void* edx, int level)
    {
        uintptr_t p = reinterpret_cast<uintptr_t>(self);
        if (g_enabled && p)
            Line("ev=MARKETING_LEVEL,proj=%p,oldLevel=%d,newLevel=%d,quality360=%.5f,hype368=%.5f,D36c=%.5f,phase=%d",
                 self, RdOr<int>(p + 0x370, -1), level, RdOr<float>(p + 0x360, -1.f), RdOr<float>(p + 0x368, -1.f),
                 RdOr<float>(p + 0x36c, -1.f), RdOr<int>(p + 0x20, -1));
        return Orig_SetMarketingLevel(self, edx, level);
    }

    // ---- buildings: log only when the disrepair flag flips ---------------------------------------------------------
    struct AssetSlot { uintptr_t obj; uint8_t flag; };
    AssetSlot g_asset[1024];
    typedef void*(__fastcall* AssetCondition_t)(void*);
    AssetCondition_t Orig_AssetCondition = nullptr;
    void* __fastcall Det_AssetCondition(void* self)
    {
        void* r = Orig_AssetCondition(self);
        if (!g_enabled) return r;
        uintptr_t o = reinterpret_cast<uintptr_t>(self);
        uint8_t flag = RdOr<uint8_t>(o + 0x2e4, 0);
        AssetSlot& sl = g_asset[(o >> 4) & 1023];
        if (sl.obj != o) { sl.obj = o; sl.flag = flag; if (flag) Line("ev=ASSET_DISREPAIR,asset=%p,disrepair=%d,condition=%.4f,lifespan=%.3f,state=%d", self, flag, RdOr<float>(o + 0x2c4, -1.f), RdOr<float>(o + 0x2c8, -1.f), RdOr<int>(o + 0x2b8, -1)); }
        else if (sl.flag != flag)
        {
            sl.flag = flag;
            Line("ev=ASSET_DISREPAIR,asset=%p,disrepair=%d,condition=%.4f,lifespan=%.3f,state=%d", self, flag,
                 RdOr<float>(o + 0x2c4, -1.f), RdOr<float>(o + 0x2c8, -1.f), RdOr<int>(o + 0x2b8, -1));
        }
        return r;
    }

    // ---- award factories: vtable slot addresses for every category judged (to decompile new categories) ----------------
    uintptr_t g_factoryVtSeen[40]; int g_factoryVtN = 0;
    void LogFactorySlots(uintptr_t factory)
    {
        uintptr_t vt = RdOr<uintptr_t>(factory, 0);
        if (!vt) return;
        for (int i = 0; i < g_factoryVtN; ++i) if (g_factoryVtSeen[i] == vt) return;
        if (g_factoryVtN < 40) g_factoryVtSeen[g_factoryVtN++] = vt;
        char buf[500]; int p = sprintf_s(buf, sizeof(buf), "ev=AWARD_FACTORY_SLOTS,vtable=%p", (void*)vt);
        for (int i = 0; i < 12; ++i)
            p += sprintf_s(buf + p, sizeof(buf) - p, ",s%d=%p", i, (void*)RdOr<uintptr_t>(vt + 4 * i, 0));
        Line("%s", buf);
    }

    bool Reg(const char* name, uintptr_t rva, void* detour, void** orig)
    {
        bool ok = HookManager::Register(name, rva, detour, orig);
        if (!ok) Logging::Log("DecadeTracker: failed to hook %s", name);
        return ok;
    }
}

namespace DecadeTracker
{
    bool Install()
    {
        g_base = HookManager::ModuleBase();
        if (!g_csInit) { InitializeCriticalSection(&g_cs); g_csInit = true; }

        wchar_t path[MAX_PATH];
        GetModuleFileNameW(nullptr, path, MAX_PATH);
        wchar_t* slash = wcsrchr(path, L'\\');
        if (slash) *(slash + 1) = 0;
        wcscat_s(path, L"decade_log.csv");

        // FILE_APPEND_DATA *without* GENERIC_WRITE: with FILE_WRITE_DATA granted, WriteFile uses the file pointer (0)
        // and silently overwrites an existing log from the start instead of appending.
        g_file = CreateFileW(path, FILE_APPEND_DATA, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr,
                             OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (g_file == INVALID_HANDLE_VALUE)
        {
            Logging::Log("DecadeTracker: cannot open decade_log.csv (error %lu); tracker disabled", GetLastError());
            return false;
        }
        LARGE_INTEGER sz{}; GetFileSizeEx(g_file, &sz); g_bytes = (unsigned long long)sz.QuadPart;
        g_enabled = true;
        Line("ev=SESSION_START,note=decade tracker attached (year is game clock days/365),build=" __DATE__ " " __TIME__ ",version=6");

        bool ok = true;
        ok &= Reg("DT_StartRelease", RVA_StartRelease, (void*)&Det_StartRelease, (void**)&Orig_StartRelease);
        ok &= Reg("DT_AIMovieCreateIncome", RVA_AIMovieCreateInc, (void*)&Det_AICreateIncome, (void**)&Orig_AICreateIncome);
        ok &= Reg("DT_IncomeDailyTick", RVA_IncomeDailyTick, (void*)&Det_IncomeTick, (void**)&Orig_IncomeTick);
        ok &= Reg("DT_GetGenreTrend", RVA_GetGenreTrend, (void*)&Det_GetGenreTrend, (void**)&Orig_GetGenreTrend);
        ok &= Reg("DT_GenrePopSat", RVA_GenrePopSat, (void*)&Det_GenrePopSat, (void**)&Orig_GenrePopSat);
        ok &= Reg("DT_ComputeFinalQuality", RVA_ComputeFinalQual, (void*)&Det_ComputeFinalQuality, (void**)&Orig_ComputeFinalQuality);
        ok &= Reg("DT_ProjectUpdate", RVA_ProjectUpdate, (void*)&Det_ProjectUpdate, (void**)&Orig_ProjectUpdate);
        ok &= Reg("DT_AwardJudge", RVA_AwardJudge, (void*)&Det_Judge, (void**)&Orig_Judge);
        ok &= Reg("DT_AwardSort", RVA_AwardSort, (void*)&Det_AwardSort, (void**)&Orig_AwardSort);
        ok &= Reg("DT_AwardBonusRecompute", RVA_AwardBonusRecomp, (void*)&Det_BonusRecomp, (void**)&Orig_BonusRecomp);
        ok &= Reg("DT_StudioRating", RVA_StudioRating, (void*)&Det_StudioRating, (void**)&Orig_StudioRating);
        ok &= Reg("DT_StarRating", RVA_StarRating, (void*)&Det_StarRating, (void**)&Orig_StarRating);
        ok &= Reg("DT_PreProdAdvance", RVA_PreProdAdvance, (void*)&Det_PreProdAdvance, (void**)&Orig_PreProdAdvance);
        ok &= Reg("DT_AIMakeMovie", RVA_AIMakeMovie, (void*)&Det_AIMakeMovie, (void**)&Orig_AIMakeMovie);
        ok &= Reg("DT_AIDecide", RVA_AIDecideRelease, (void*)&Det_AIDecide, (void**)&Orig_AIDecide);
        ok &= Reg("DT_SalaryPayment", RVA_SalaryPayment, (void*)&Det_SalaryPayment, (void**)&Orig_SalaryPayment);
        ok &= Reg("DT_StuntRoll", RVA_StuntRoll, (void*)&Det_StuntRoll, (void**)&Orig_StuntRoll);
        ok &= Reg("DT_SetMarketingLevel", RVA_SetMarketingLevel, (void*)&Det_SetMarketingLevel, (void**)&Orig_SetMarketingLevel);
        ok &= Reg("DT_AssetCondition", RVA_AssetCondition, (void*)&Det_AssetCondition, (void**)&Orig_AssetCondition);
        Logging::Log("DecadeTracker: installed (%s), writing decade_log.csv next to the exe", ok ? "all hooks" : "SOME HOOKS FAILED");
        return ok;
    }

    void OnStudioAITick(void* studio)
    {
        if (!g_enabled || !g_csInit) return;
        EnterCriticalSection(&g_cs);
        MaybeMonthly();
        AiMonthly(reinterpret_cast<uintptr_t>(studio));
        LeaveCriticalSection(&g_cs);
    }

    void Shutdown()
    {
        g_enabled = false;
        if (g_file != INVALID_HANDLE_VALUE) { CloseHandle(g_file); g_file = INVALID_HANDLE_VALUE; }
    }
}
