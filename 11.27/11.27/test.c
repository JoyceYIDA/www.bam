#define _GRT_SECUSE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	const char *p1 = "abcdef";
	const char *p2 = "abcdef";

	arr1[0] = 'e';
	*p1 == 'e';
	if(arr1 == arr2)
	{
		printf("arr1 == arr2\n");
	}
	else
	{
		printf("arr1 != arr2\n");//
	}
	if(p1 == p2)
	{
		printf("p1 == p2\n");
	}
	else
	{
		printf("p1 != p2\n");
	}
	system("pause");
	return 0;
}
