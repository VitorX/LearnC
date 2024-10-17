#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <windows.h>

int main()
{
//	SetConsoleOutputCP(CP_UTF8);
	  printf("%s", "╠ ╡ ╢ ╣ ╤");
	setlocale(LC_ALL, "");
	if(wprintf(L"%ls\r\n",L"你好！")==-1)
	{
		perror("wprintf failed.");
	}
	printf("%s\r\n","你好！");
	wchar_t icon[] = L"\u2764";
	if(wprintf(L"%ls\r\n",icon)==-1)
		perror("wprintf failed.");
	printf("你好%d\r\n",3);
}
