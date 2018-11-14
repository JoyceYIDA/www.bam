#define _CRT_SECURE_NO_WARNINGS 1
////1.递归和非递归分别实现求第n个斐波那契数。
////递归
//#include<stdio.h>
//#include<stdlib.h>
//int fib(int i)
//{
//	if (i <=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return  fib(i - 1) + fib(i - 2);
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	printf("请输入一个数 ");
//		scanf("%d", &i);
//		ret=fib(i);
//		printf("%d", ret);
//	system("pause");
//	return 0;
//}
////非递归
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	int x=1;
	int y=1;
	int z;
	if (n <= 2);
	{
		return 1;
	}
	else
	{
		while (n > 2)
		{
			z = x + y;
			x = y;
			y = z;
			n--;
		}
		return z;
	}
}
int main()
{
	int n = 0;
	printf("请输入一个数");
	scanf("%d", &n);
	int ret = 0;
	ret=fib(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
////2.编写一个函数实现n^k，使用递归实现
////
//#include<stdio.h>
//#include<stdlib.h>
//int math(int n,int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//		return n*math(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	printf("请输入两个数 ");
//	scanf("%d %d", &n,&k);
//	ret = math(n, k);
//	printf("n^k=%d", ret);
//	system("pause");
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//#include<stdio.h>
//#include<stdlib.h>
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个非负整数\n");
//	scanf("%d", &n);
//	ret=DigitSum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void reverse_string(char *str)
//{
//	if (*str != '\0')
//	{
//		reverse_string(str + 1);
//		printf("%c", *str);
//	}
//}
//int main()
//{
//	char *str="abcdef";
//	reverse_string(str);
//	printf("\n");
//	system("pause");
//	return 0;
//}
////5.递归和非递归分别实现strlen
////递归
//#include<stdio.h>
//#include<stdlib.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char *p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d", len);
//	system("pause");
//	return 0;
//}
////非递归
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	int i = 0;
//	while (*str != '\0')
//	{
//		i++;
//		str++;
//	}
//	return i;
//}
//int main()
//{
//	char*p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

////6.递归和非递归分别实现求n的阶乘
//#include<stdio.h>
//#include<stdlib.h>
//int math(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	{
//		return n*math(n - 1);
//	}
//}
//int main()
//{
//	int n ;
//	printf("n=");
//	scanf("%d", &n);
//	int ret = 0;
//	ret = math(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
////非递归
//#include<stdio.h>
//#include<stdlib.h>
//int math(int n)
//{
//	while (n > 1)
//	{
//		n = n*(n - 1);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	printf("n=");
//	scanf("%d", &n);
//	int ret = 0;
//	ret = math(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
////7.递归方式实现打印一个整数的每一位
////
//#include<stdio.h>
//#include<stdlib.h>
//void my_printf(int n)
//{
//	if (n>9)
//	{
//		my_printf(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数\n");
//		scanf("%d", &n);
//     my_printf(n);
//	system("pause");
//	return 0;
//}