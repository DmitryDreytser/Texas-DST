// DST_Test.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "..\Texas DST\Texas DST.h"


int _cdecl main()
{
	uint64_t challenge, response, key;

	challenge = 1;
	response = 0;
	key = 0x260000;

    response = dst40hash(challenge, key);
	printf("\n\nChallenge1 = %010llX", challenge);
	printf("\n\nkey = %010llX", key);
	printf("\nresponse  = %06llX", response);
	getchar();
	return 0;
}


