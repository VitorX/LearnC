#include <Windows.h>
#include <Wincrypt.h>

int main(int argc, char **argv)
{
	BYTE data[5]={0x00,0x01,0x02,0x03,0x04};
	DATA_BLOB indata, outdata;
	indata.cbData=5;
	indata.pbData=&data;

	if(CryptProtectData(&indata,NULL,NULL,NULL,NULL,CRYPTPROTECT_LOCAL_MACHINE,&outdata))
		printf("protect data successfully!\n");
	else
		printf("error:%d\n",GetLastError());
}
