#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	char *p[10];
	for(int i=0;i<10;i++)
	{
		p[i]=malloc(640*1024);
		if(p[i]==NULL)
			printf("第%d次分配内存失败!\n",i);		
		else
			printf("第%d此分配内存，地址：%p\n",i,p);
		getchar();
	}

	for(int i=0;i<10;i++)
	{
		if(p[i]!=NULL)
			free(p[i]);
		getchar();
		printf("释放第%d次分配内存!\n",i);		
	}
}
