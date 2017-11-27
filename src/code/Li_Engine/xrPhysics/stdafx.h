
#pragma once

#define MTL_EXPORT_API
#define ENGINE_API
#define DLL_API
#define ECORE_API
//#include "../xrEngine/stdafx.h"

#include "../xrCore/xrCore.h"

#include "smart_cast.h"
//#include "../xrEngine/pure.h"
//#include "../xrEngine/engineapi.h"
//#include "../xrEngine/eventapi.h"

#include "../xrCDB/xrcdb.h"
#include "../xrSound/sound.h"
//#include "../xrengine/IGame_Level.h"

#include "xrPhysics.h"

#include "../xrAPI/xrapi.h"
#ifdef DEBUG
#include "d3d9types.h"
#endif
// IC IGame_Level &GLevel()
//{
//	VERIFY( g_pGameLevel );
//	return *g_pGameLevel;
//}
class CGameMtlLibrary;
IC CGameMtlLibrary& GMLibrary() {
    VERIFY(PGMLib);
    return *PGMLib;
}