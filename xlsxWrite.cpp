//#include "stdafx.h"
#include "EasyXLS.h"
#include <conio.h>
int _tmain(int argc, _TCHAR* argv[])
{
	printf("Tutorial 37\n----------\n");

    HRESULT hr;
	// Initialize COM
    hr = CoInitialize(0);

	// Uninitialize COM
    CoUninitialize();

    _getch();
    return 0;

}
