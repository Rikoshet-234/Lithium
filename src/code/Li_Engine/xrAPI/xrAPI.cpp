#include "stdafx.h"
#include "xrAPI.h"

XRAPI_API IRender_interface* Render = nullptr;
XRAPI_API IRenderFactory* RenderFactory = nullptr;
XRAPI_API CDUInterface* DU = nullptr;
XRAPI_API xr_token* vid_mode_token = nullptr;
XRAPI_API IUIRender* UIRender = nullptr;
#ifndef _EDITOR
// XRAPI_API CSound_manager_interface*	Sound = NULL;
XRAPI_API CGameMtlLibrary* PGMLib = nullptr;
#endif
#ifdef DEBUG
XRAPI_API IDebugRender* DRender = nullptr;
#endif // DEBUG
