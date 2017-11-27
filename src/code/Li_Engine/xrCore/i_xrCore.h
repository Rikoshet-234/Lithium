#pragma once

// Our headers
#ifdef XRCORE_EXPORTS
#define XRCORE_API __declspec(dllexport)
#else
#define XRCORE_API __declspec(dllimport)
#endif

#include <windows.h>
#include "_types.h"

typedef void(*LogCallback)(const char* string);

class XRCORE_API i_xrCore
{
public:
	string64 ApplicationName;
	string_path ApplicationPath;
	string_path WorkingPath;
	string64 UserName;
	string64 CompName;
	string512 Params;
	DWORD dwFrame;

	virtual void _initialize(const char* ApplicationName, LogCallback cb = nullptr, bool init_fs = true,
		const char* fs_fname = nullptr) = 0;
	virtual void _destroy() = 0;

	static i_xrCore* thisInstance;

	i_xrCore() {};
	virtual ~i_xrCore() {};
};