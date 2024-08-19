
#include <iostream>
#include <windows.h>
#include <synchapi.h>

HANDLE ghWriteEvent;

DWORD WINAPI ThreadProc(
    _In_ LPVOID lpParameter
) {
    char* par = (char*)lpParameter;
    std::cout << "This msg is from my thread:"<<par<<"!\r\n";
    while (true)
    {
	WaitForSingleObject(ghWriteEvent,INFINITE);
	std::cout<<"read date from my thread...\r\n";
	ResetEvent(ghWriteEvent);

    }
}
int main()
{
    std::cout << "Hello World!\n";

    ghWriteEvent=CreateEvent(NULL,TRUE,FALSE,NULL);

    const char* pChar="abc";
    std::cout<<pChar<<std::endl;
    DWORD threadID;
    CreateThread(NULL, 0, ThreadProc, (void *)"thread1", 0, &threadID);
    std::cout << "This msg is from main thread!\r\n";
    while (true)
    {
	std::cout<<"Main thread is writing data...\r\n";
	SetEvent(ghWriteEvent);
	Sleep(1000);
    }
}



