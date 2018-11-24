#define _GRT_SECUSE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a = -128;
	//内存中存储的是补码 
	// 10000000 00000000 00000000 10000000
	// 11111111 11111111 11111111 01111111
	// 11111111 11111111 11111111 10000000
	//char是一个字节 八个比特位 
	
	char b = 128;
	// 00000000 00000000 00000000 10000000
	// 01111111 11111111 11111111 01111111
	// 11111111 11111111 11111111 10000000 
	printf("%u\n", a);
	printf("%u\n", b);//输出结果ab相同
	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}//死循环 看到定义unsigned基本都是死循环
	system("pause");
	return 0;
}