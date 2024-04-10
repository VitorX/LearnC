#include <Windows.h>
#include <Wincrypt.h>
#include <stdio.h>

#define DATAFILE "mydata"

static void showdata(DATA_BLOB*);
static void writedata(DATA_BLOB *pdata);
static void showbytes(BYTE *data,int size);

int main(int argc, char **argv)
{
	BYTE data[5]={0x00,0x01,0x02,0x03,0x04};
	DATA_BLOB indata, outdata, decrydata;
	indata.cbData=5;
	indata.pbData=&data;

	printf("the raw data is like below:\n");
	showbytes(&data[0],5);
	if(CryptProtectData(&indata,NULL,NULL,NULL,NULL,CRYPTPROTECT_LOCAL_MACHINE,&outdata))
		printf("protect data successfully!\n");
	else
		printf("protect error:%d\n",GetLastError());
	showdata(&outdata);
	writedata(&outdata);
	printf("data is unprotected like below:\n");
	if(!CryptUnprotectData(&outdata,NULL,NULL,NULL,NULL,CRYPTPROTECT_VERIFY_PROTECTION,&decrydata))
	{
		printf("unprotect data error:%d\n",GetLastError());
	}
	showdata(&decrydata);
}
static void writedata(DATA_BLOB *pdata)
{
	FILE *pfile= fopen(DATAFILE,"w+");
	if(pfile!=NULL)
		fwrite(pdata->pbData,1,pdata->cbData,pfile);
	else
		printf("open file error:%d\n",GetLastError());
}
static void showdata(DATA_BLOB *pdata)
{
	showbytes(pdata->pbData,pdata->cbData);
	/*return void;
	for(int i=0;i<pdata->cbData;i++)
	{
		printf("%#x ,",pdata->pbData[i]);
	}*/
}
static void showbytes(BYTE *data,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%#x ,",data[i]);
	}
	printf("\n");
}
