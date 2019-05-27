// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

int __stdcall DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case 1:
	case 2:
	case 3:
	case 0:
		break;
	}
	return 1;
}

