#ifndef __X_RAY_H__
#define __X_RAY_H__

// refs
class ENGINE_API CGameFont;

#include "../xrRender/FactoryPtr.h"
#include "../xrRender/ApplicationRender.h"

extern XRCORE_API LPCSTR build_date;
extern XRCORE_API u32 build_id;

extern ENGINE_API string512 g_sLaunchOnExit_params;
extern ENGINE_API string512 g_sLaunchOnExit_app;
extern ENGINE_API string_path g_sLaunchWorkingFolder;
extern ENGINE_API bool g_bBenchmark;
extern ENGINE_API BOOL g_bIntroFinished;
extern ENGINE_API CInifile* pGameIni;

extern ENGINE_API void compute_build_id();
extern ENGINE_API void InitSettings();

extern ENGINE_API void InitInput();
extern ENGINE_API void InitConsole();

extern ENGINE_API void Startup();
extern ENGINE_API void StartupEx();

// definition
class ENGINE_API CApplication : public pureFrame, public IEventReceiver {
    friend class dxApplicationRender;

    // levels
    struct sLevelInfo {
        char* folder;
        char* name;
    };

	string256				app_title;

public:
	string2048 ls_header;
	string2048 ls_tip_number;
	string2048 ls_tip;

private:
    FactoryPtr<IApplicationRender> m_pRender;

    int max_load_stage;

    int load_stage;

    u32 ll_dwReference;

private:
    EVENT eQuit;
    EVENT eStart;
    EVENT eStartLoad;
    EVENT eDisconnect;
    EVENT eConsole;
    EVENT eStartMPDemo;

    void Level_Append(LPCSTR lname);

public:
    CGameFont* pFontSystem;

    // Levels
    xr_vector<sLevelInfo> Levels;
    u32 Level_Current;
    void Level_Scan();
    int Level_ID(LPCSTR name, LPCSTR ver, bool bSet);
    void Level_Set(u32 ID);
    void LoadAllArchives();
    static CInifile* GetArchiveHeader(LPCSTR name, LPCSTR ver);

    // Loading
    void LoadBegin();
    void LoadEnd();
	void LoadTitleInt(LPCSTR str1, LPCSTR str2, LPCSTR str3);
	void LoadTitleIntOld(LPCSTR str);
    void LoadStage();
    void LoadSwitch();
    void LoadDraw();

    virtual void OnEvent(EVENT E, u64 P1, u64 P2);

    // Other
    CApplication();
    virtual ~CApplication();

    virtual void _BCL OnFrame();
    void load_draw_internal();
    void destroy_loading_shaders();
};

extern ENGINE_API CApplication* pApp;

#endif //__XR_BASE_H__
