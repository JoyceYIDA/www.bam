#define _CRT_SECURE_NO_WARNINGS 1
////1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
////输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
////
//#include<stdio.h>
//#include<stdlib.h>
//char mult(int i)
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	for (x = 1; x <= i; x++)
//	{
//		for (y = 1; y <= x ; y++)
//		{
//			z = x*y;
//			printf("%d*%d=%d  ", y, x, z);
//		}
//		printf("\n ");
//	}
//}
//int main()
//{
//	int i = 0;
//	int ret;
//	printf("请输入一个数\n");
//	scanf("%d", &i);
//	ret = mult(i);
//	system("pause");
//	return 0;
//}
////2.使用函数实现两个数的交换。
////
//#include<stdio.h>
//#include<stdlib.h>
//int chag(int a, int b)
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("交换后%d %d\n", a, b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret;
//	printf("请输入两个数\n");
//	scanf("%d %d", &a, &b);
//	ret = chag(a, b);
//	system("pause");
//	return 0;
//}
////3.实现一个函数判断year是不是润年。
////
//#include<stdio.h>
//#include<stdlib.h>
//int leap(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		return 1;
//	}
//	else if (year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int ret;
//	printf("请输入你想查找的年份\n");
//	scanf("%d", &year);
//	ret = leap(year);
//	if (ret == 1)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//	system("pause");
//	return 0;
//}
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int  j = 0;
	int tmp = 0;
	for (j = 0; j < sz; j++)//按顺序输出数组
	{
		while (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}//交换数组第一个和最后一个的值，两两对应，向中间靠拢
		printf("%d ", arr[j]);
	}
	printf("\n");
}
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[6] = { 1, 3, 4, 6, 7, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("数组逆置\n");
	reverse(arr, sz);
	printf("数组初始化\n");
    init(arr, sz);
	printf("清空数组\n");
	empty(arr, sz);
	system("pause");
	return 0;
}
////5.实现一个函数，判断一个数是不是素数。
//#include<stdio.h>
//#include<stdlib.h>
//int su(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i%j != 0)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int ret;
//	printf("请输入一个数\n");
//	scanf("%d", &i);
//	ret = su(i);
//	if (ret == 1)
//	{
//		printf("%d是素数\n", i);
//	}
//	else
//	{
//		printf("%d不是素数\n", i);
//	}
//	system("pause");
//	return 0;
//}