#define _CRT_SECURE_NO_WARNINGS 1
////1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
////�ݹ�
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
//	printf("������һ���� ");
//		scanf("%d", &i);
//		ret=fib(i);
//		printf("%d", ret);
//	system("pause");
//	return 0;
//}
////�ǵݹ�
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
	printf("������һ����");
	scanf("%d", &n);
	int ret = 0;
	ret=fib(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
////2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
//	printf("������������ ");
//	scanf("%d %d", &n,&k);
//	ret = math(n, k);
//	printf("n^k=%d", ret);
//	system("pause");
//	return 0;
//}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//	printf("������һ���Ǹ�����\n");
//	scanf("%d", &n);
//	ret=DigitSum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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
////5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////�ݹ�
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
////�ǵݹ�
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

////6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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
////�ǵݹ�
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
////7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//	printf("������һ������\n");
//		scanf("%d", &n);
//     my_printf(n);
//	system("pause");
//	return 0;
//}