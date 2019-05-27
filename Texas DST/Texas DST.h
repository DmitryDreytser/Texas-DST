// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the TEXASDST_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// TEXASDST_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#define TEXASDST_API _declspec(dllexport) 

typedef unsigned char uint8_t;
typedef unsigned long long uint64_t;
typedef union
{
	uint64_t Val;

	struct
	{
		uint8_t b0 : 1;
		uint8_t b1 : 1;
		uint8_t b2 : 1;
		uint8_t b3 : 1;
		uint8_t b4 : 1;
		uint8_t b5 : 1;
		uint8_t b6 : 1;
		uint8_t b7 : 1;
		uint8_t b8 : 1;
		uint8_t b9 : 1;
		uint8_t b10 : 1;
		uint8_t b11 : 1;
		uint8_t b12 : 1;
		uint8_t b13 : 1;
		uint8_t b14 : 1;
		uint8_t b15 : 1;
		uint8_t b16 : 1;
		uint8_t b17 : 1;
		uint8_t b18 : 1;
		uint8_t b19 : 1;
		uint8_t b20 : 1;
		uint8_t b21 : 1;
		uint8_t b22 : 1;
		uint8_t b23 : 1;
		uint8_t b24 : 1;
		uint8_t b25 : 1;
		uint8_t b26 : 1;
		uint8_t b27 : 1;
		uint8_t b28 : 1;
		uint8_t b29 : 1;
		uint8_t b30 : 1;
		uint8_t b31 : 1;
		uint8_t b32 : 1;
		uint8_t b33 : 1;
		uint8_t b34 : 1;
		uint8_t b35 : 1;
		uint8_t b36 : 1;
		uint8_t b37 : 1;
		uint8_t b38 : 1;
		uint8_t b39 : 1;
		uint8_t reserved1;
		uint8_t reserved2;
		uint8_t reserved3;
	};
} WORD40;

TEXASDST_API uint64_t dst40hash(uint64_t challenge, uint64_t key);
uint64_t  block192(uint64_t hash_in, uint64_t key_in);