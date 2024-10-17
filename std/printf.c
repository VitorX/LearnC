#include<stdio.h>
int main()
{
	printf("12345679*9=%d\n", 12345679 * 9);//print format格式化打印
	printf("12345679*18=%d\n", 12345679 * 18);
	printf("北京时间： %d:%d\n",16,7);
	printf("北京时间： %2d:%2d\n", 16, 7);//不写-是右对齐
	printf("北京时间： %-2d:%-2d\n", 16, 7);//写-是左对齐
	printf("北京时间： %02d:%02d\n", 16, 7);//0作用：空位补齐，用0，默认空格
 printf("你好%d\r\n",3);
	return 0;
}

