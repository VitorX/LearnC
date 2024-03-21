#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

 int msgboxID = MessageBoxW(
        NULL,
        (LPCWSTR)L"Resource not available\nDo you want to try again?",
        (LPCWSTR)L"Account Details",
        MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
    );

    switch (msgboxID)
    {
    case IDCANCEL:
        printf("You clicked IDCANCEL!\n");
        break;
    case IDTRYAGAIN:
        printf("You clicked IDTRYAGAIN!\n");
        break;
    case IDCONTINUE:
        printf("You clicked IDCONTINUE!\n");
        break;
    }

}