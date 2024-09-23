#include <windows.h>
#include <stdio.h>
#include <synchapi.h>

static HINSTANCE hinstDLL;
static HOOKPROC KeyboardProc;


int main()
{
	printf("Hello!\r\n");
	hinstDLL = LoadLibrary(TEXT("mykeyboardhook.dll")); 
	if(hinstDLL==NULL)
	{
		printf("LoadLibrary failed.");
		return 1;
	}
	KeyboardProc= (HOOKPROC)GetProcAddress(hinstDLL, "KeyboardProc"); 

	if(KeyboardProc==NULL)
		printf("KeyboardProc is NULL\r\n");
	HHOOK hhookSysMsg;
	hhookSysMsg = SetWindowsHookEx(
                    WH_KEYBOARD,
                    KeyboardProc,
                    NULL,
                    0);
	if(hhookSysMsg==NULL)
		printf("SetWindowxHookEx Error: %d\r\n",GetLastError());	

	HANDLE myEvent=CreateEvent(NULL,TRUE,FALSE,NULL);
	if(myEvent==NULL)
		printf("CreateEven:Error: %d\r\n",GetLastError());	
	WaitForSingleObject(myEvent,INFINITE);
}


