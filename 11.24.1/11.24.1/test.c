#define _GRT_SECUSE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a = -128;
	//�ڴ��д洢���ǲ��� 
	// 10000000 00000000 00000000 10000000
	// 11111111 11111111 11111111 01111111
	// 11111111 11111111 11111111 10000000
	//char��һ���ֽ� �˸�����λ 
	
	char b = 128;
	// 00000000 00000000 00000000 10000000
	// 01111111 11111111 11111111 01111111
	// 11111111 11111111 11111111 10000000 
	printf("%u\n", a);
	printf("%u\n", b);//������ab��ͬ
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
	}//��ѭ�� ��������unsigned����������ѭ��
	system("pause");
	return 0;
}