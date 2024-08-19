#include <iostream>
#include <windows.h>
#include <synchapi.h>

HANDLE ghSemaphore;

DWORD WINAPI PrintA(_In_ LPVOID lpParameter)
{
    while (true)
    {
	WaitForSingleObject(ghSemaphore,INFINITE);
    	std::cout << "A";
	Sleep(1000);
    }
}
DWORD WINAPI PrintB(_In_ LPVOID lpParameter)
{
    while (true)
    {
	WaitForSingleObject(ghSemaphore,INFINITE);
    	std::cout << "B";
	Sleep(1000);
    }
}
DWORD WINAPI PrintC(_In_ LPVOID lpParameter)
{
    while (true)
    {
	WaitForSingleObject(ghSemaphore,INFINITE);
    	std::cout << "C";
	Sleep(1000);
    }
}
DWORD WINAPI PrintD(_In_ LPVOID lpParameter)
{
    while (true)
    {
	WaitForSingleObject(ghSemaphore,INFINITE);
    	std::cout << "D";
	Sleep(1000);
    }
}
int main()
{
    std::cout << "Hello World!\n";

    ghSemaphore=CreateSemaphore(NULL,0,4,NULL);

    CreateThread(NULL, 0, PrintA, NULL,0, NULL);
    CreateThread(NULL, 0, PrintB, NULL,0, NULL);
    CreateThread(NULL, 0, PrintC, NULL,0, NULL);
    CreateThread(NULL, 0, PrintD, NULL,0, NULL);
    while(true)
    {
    	if(ReleaseSemaphore(ghSemaphore,1,NULL)==0)
		std::cout<<"\r\nrelease semaphore failed!\r\n";
	else
		std::cout<<"\r\nrelease semaphore ok!\r\n";
	Sleep(250);
    }
}



