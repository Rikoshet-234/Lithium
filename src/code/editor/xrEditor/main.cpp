#include "stdafx.h"
#include "xrEditor.h"
#include <QtWidgets/QApplication>
#include "../../Li_Engine/xrEngine/xr_ioc_cmd.h"
#include "../../Li_Engine/xrEngine/LightAnimLibrary.h"

LPSTR lpCmdLine;
HWND hRenderTo;

void RunEngine()
{
	Debug._initialize();

	if (!IsDebuggerPresent()) 
	{
		HMODULE const kernel32 = LoadLibrary("kernel32.dll");
		R_ASSERT(kernel32);

		typedef BOOL(__stdcall * HeapSetInformation_type)(HANDLE, HEAP_INFORMATION_CLASS, PVOID, SIZE_T);
		HeapSetInformation_type const heap_set_information = (HeapSetInformation_type)GetProcAddress(kernel32, "HeapSetInformation");
		if (heap_set_information) {
			ULONG HeapFragValue = 2;
#ifdef DEBUG
			BOOL const result =
#endif // #ifdef DEBUG
			heap_set_information(GetProcessHeap(), HeapCompatibilityInformation, &HeapFragValue, sizeof(HeapFragValue));
			VERIFY2(result, "can't set process heap low fragmentation");
		}
	}

	SetThreadAffinityMask(GetCurrentThread(), 1);
	g_bIntroFinished = TRUE;

	g_sLaunchOnExit_app[0] = NULL;
	g_sLaunchOnExit_params[0] = NULL;

	LPCSTR fsgame_ltx_name = "-fsltx ";
	string_path fsgame = "";

	//compute_build_id();
	build_id = 0;
	build_date = "";
	Core._initialize("xrEditor", NULL, TRUE, fsgame[0] ? fsgame : NULL);

	InitSettings();


	FPU::m24r();

	Engine.Initialize();
	while (!g_bIntroFinished)
		Sleep(100);

	Device.m_hWnd = hRenderTo;
	Device.isEditor = true;
	Device.Initialize();

	InitInput();
	InitConsole();

	Engine.External.CreateRendererList();

	Msg("command line %s", lpCmdLine);

	if (strstr(Core.Params, "-r2a"))
		Console->Execute("renderer renderer_r2a");
	else if (strstr(Core.Params, "-r2"))
		Console->Execute("renderer renderer_r2");
	else {
		CCC_LoadCFG_custom* pTmp = xr_new<CCC_LoadCFG_custom>("renderer ");
		pTmp->Execute(Console->ConfigFile);
		xr_delete(pTmp);
	}

	Engine.External.Initialize();
	Console->Execute("stat_memory");
		
	StartupEx();
	Core._destroy();
}

int main(int argc, char *argv[])
{
	lpCmdLine = argv[0];

	QApplication a(argc, argv);
	xrEditor w;
	w.show();
	hRenderTo = w.GetRendererFrameWnd();

	RunEngine();

	return a.exec();
}
