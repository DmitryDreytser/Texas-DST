// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

//#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#define DECLARE_HANDLE(name) struct name##__{int unused;}; typedef struct name##__ *name
#define far

typedef void *HANDLE;
DECLARE_HANDLE(HINSTANCE);

typedef void far  *LPVOID;
typedef HINSTANCE HMODULE;      /* HMODULEs can be used in place of HINSTANCEs */


typedef unsigned long DWORD;

// Windows Header Files:
//#include <windows.h>



// TODO: reference additional headers your program requires here
