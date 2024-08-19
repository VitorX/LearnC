#include <iostream>
#include <windows.h>
#include <synchapi.h>

HANDLE aEvent;
HANDLE bEvent;
HANDLE cEvent;
HANDLE dEvent;

DWORD WINAPI PrintA(_In_ LPVOID lpParameter)
{
    while (true)
    {
	WaitForSingleObject(aEvent,INFINITE);
    	std::cout << "A";
	SetEvent(bEvent);
    }
}
DWORD WINAPI PrintB(_In_ LPVOID lpParameter)
{
    while (true)
    {
	WaitForSingleObject(bEvent,INFINITE);
    	std::cout << "B";
	SetEvent(cEvent);
    }
}
DWORD WINAPI PrintC(_In_ LPVOID lpParameter)
{
    while (true)
    {
	WaitForSingleObject(cEvent,INFINITE);
    	std::cout << "C";
	SetEvent(dEvent);
    }
}
DWORD WINAPI PrintD(_In_ LPVOID lpParameter)
{
    while (true)
    {
	WaitForSingleObject(dEvent,INFINITE);
    	std::cout << "D";
	Sleep(1000);
	SetEvent(aEvent);
    }
}
int main()
{
    std::cout << "Hello World!\n";

    aEvent=CreateEvent(NULL,FALSE,FALSE,NULL);
    bEvent=CreateEvent(NULL,FALSE,FALSE,NULL);
    cEvent=CreateEvent(NULL,FALSE,FALSE,NULL);
    dEvent=CreateEvent(NULL,FALSE,FALSE,NULL);

    CreateThread(NULL, 0, PrintA, NULL,0, NULL);
    CreateThread(NULL, 0, PrintB, NULL,0, NULL);
    CreateThread(NULL, 0, PrintC, NULL,0, NULL);
    CreateThread(NULL, 0, PrintD, NULL,0, NULL);
    SetEvent(aEvent);
    Sleep(10000);
}



