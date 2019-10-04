#pragma once


void * __cdecl __malloc(size_t size);


void __cdecl __free(void * pv);

WCHAR * __cdecl __itow(int iVal, WCHAR * pwszBuf, int iRadix);