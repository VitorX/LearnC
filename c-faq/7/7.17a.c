#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,char** argv)
{
	char *p;
	for(int i=0;;i++)
	{
		p=malloc(640*1024);
		if(p==NULL)
			printf("第%d次分配内存失败!\n",i);		
		else
			printf("第%d此分配内存，地址：%p\n",i,p);
		sleep(1);
	}

}
