#include <windows.h>
#include <stdio.h>

int main()
{
	// Path to the DLL
    LPCSTR dllPath = "C:\\Windows\\System32\\fmaudvg.dll";

    // Load the DLL
    HMODULE hModule = LoadLibrary(dllPath);
    HMODULE hModule1 = LoadLibrary("mybigdll.dll");

    if (hModule == NULL) {
        printf("Failed to load DLL. Error: %lu\n", GetLastError());
        return 1;
    }else
	    printf("load dll ok!\r\n");

    int i;
    scanf("%d",&i);
}
