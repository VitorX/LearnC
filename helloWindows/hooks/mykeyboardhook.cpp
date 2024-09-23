#include <windows.h>
#include <stdio.h>

__declspec(dllexport) LRESULT CALLBACK KeyboardProc(
  _In_ int    code,
  _In_ WPARAM wParam,
  _In_ LPARAM lParam
)
{
        printf("0x%x",wParam);
        //if(code <0)
        return CallNextHookEx(NULL,code,wParam,lParam);
}
