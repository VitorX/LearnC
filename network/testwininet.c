#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <wininet.h>
#include <Tchar.h>
#include <strsafe.h>
#include <string>
#include <process.h>

int WINAPI Dumper( HINTERNET hResource);

int wmain(int argc, wchar_t ** argv)
{
    if(argc!=2)
    {
        printf("wrong usage!\n\ttestwininet.exe {host}\n");
        return 1;
    }
    printf("pid: %d\n", _getpid());
    HINTERNET internet = InternetOpen(L"WinInet Example/1.0",  INTERNET_OPEN_TYPE_PRECONFIG,NULL,NULL,0);

    if(internet)
        internet = InternetConnect(internet,argv[1],INTERNET_DEFAULT_HTTP_PORT,NULL,NULL,INTERNET_SERVICE_HTTP,0,0);
    else
    {
        printf("InternetOpen failed (%d)!\n",GetLastError());
        return 1;
    }

    PCTSTR rgpszAcceptTypes[] = {L"text/*", NULL};
    if(internet)
        internet = HttpOpenRequest(internet, L"GET", L"",NULL,NULL,rgpszAcceptTypes,0,0);
    else
    {
        printf("InternetConnect failed (%d)!\n",GetLastError());
        return 1;
    }

    if(internet)
        HttpSendRequest(internet,NULL,0,NULL,0);
     else
    {
        printf("HttpOpenRequest failed (%d)!\n",GetLastError());
        return 1;
    }   

    if(internet)
        Dumper(internet);
    else
    {
        printf("HttpSendRequest failed (%d)!\n",GetLastError());
        return 1;
    }   
    return 0;
}


int WINAPI Dumper(HINTERNET hResource)
{
    LPTSTR lpszData;    // buffer for the data
    DWORD  dwSize;       // size of the data available
    DWORD  dwDownloaded; // size of the downloaded data
    DWORD  dwSizeSum=0;  // size of the data in the textbox
    LPTSTR lpszHolding;  // buffer to merge the textbox data and buffer


    // This loop handles reading the data.
    do
    {
        // The call to InternetQueryDataAvailable determines the
        // amount of data available to download.
        if (!InternetQueryDataAvailable(hResource,&dwSize,0,0))
        {
            printf("InternetQueryDataAvailable failed (%d)\n", GetLastError());
            return FALSE;
        }
        else
        {
            if(dwSize==0)
                break;
            printf("data {%d} available\n",dwSize);
            // Allocate a buffer of the size returned by
            // InternetQueryDataAvailable.
            lpszData = new TCHAR[dwSize+1];

            // Read the data from the HINTERNET handle.
            if(!InternetReadFile(hResource,
                                 (LPVOID)lpszData,
                                 dwSize,
                                 &dwDownloaded))
            {
                printf("InternetReadFile failed (%d)\n", GetLastError());
                delete[] lpszData;
                break;
            }
            else
            {
                // Add a null terminator to the end of the data buffer
                lpszData[dwDownloaded]='\0';
                printf("%s\n",lpszData);
              
                delete[] lpszData;
                   if (dwDownloaded == 0)
                        break;
            }
        }
    }
    while(TRUE);
    // Close the HINTERNET handle.
    InternetCloseHandle(hResource);

    return TRUE;
}


