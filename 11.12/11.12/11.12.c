#define _CRT_SECURE_NO_WARNINGS 1
////1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
////����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
//	printf("������һ����\n");
//	scanf("%d", &i);
//	ret = mult(i);
//	system("pause");
//	return 0;
//}
////2.ʹ�ú���ʵ���������Ľ�����
////
//#include<stdio.h>
//#include<stdlib.h>
//int chag(int a, int b)
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("������%d %d\n", a, b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret;
//	printf("������������\n");
//	scanf("%d %d", &a, &b);
//	ret = chag(a, b);
//	system("pause");
//	return 0;
//}
////3.ʵ��һ�������ж�year�ǲ������ꡣ
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
//	printf("������������ҵ����\n");
//	scanf("%d", &year);
//	ret = leap(year);
//	if (ret == 1)
//	{
//		printf("%d������", year);
//	}
//	else
//	{
//		printf("%d��������", year);
//	}
//	system("pause");
//	return 0;
//}
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
	for (j = 0; j < sz; j++)//��˳���������
	{
		while (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}//���������һ�������һ����ֵ��������Ӧ�����м俿£
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
	printf("��������\n");
	reverse(arr, sz);
	printf("�����ʼ��\n");
    init(arr, sz);
	printf("�������\n");
	empty(arr, sz);
	system("pause");
	return 0;
}
////5.ʵ��һ���������ж�һ�����ǲ���������
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
//	printf("������һ����\n");
//	scanf("%d", &i);
//	ret = su(i);
//	if (ret == 1)
//	{
//		printf("%d������\n", i);
//	}
//	else
//	{
//		printf("%d��������\n", i);
//	}
//	system("pause");
//	return 0;
//}