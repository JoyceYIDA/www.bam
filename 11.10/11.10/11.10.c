#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int binary_search(int arr[], int left, int right,int i)
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
//	int ret = 0;
//	int i = 6;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	ret = binary_search(arr, left, right, i);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	system("pause");
//	return 0;
//}
//ʵ��һ��������ӡ�˷��ھ���
//#include<stdio.h>
//#include<stdlib.h>
//char Step(int i, int j, int k)
//{
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	printf("%d\n", i);
//	Step(i, j);
//		system("pause");
//	return 0;
//}
////��������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//void game()
//{
//	int j = 0;
//	srand(time(NULL));
//	int num = 0;
//	num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("���һ��1-100֮�����");
//			scanf_s("%d", &j);
//		if (j< num)
//		{
//			printf("��С��\n");
//		}
//		else if (j>num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("����0�˳���Ϸ������1������Ϸ\n");
//}
//int main()
//{
//	int in = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//			scanf_s("%d", &in);
//			switch(in)
//			{
//				case 1:
//					game();
//					break;
//				case 0:
//						printf("�˳���Ϸ\n");
//						break;
//					default:printf("ѡ�����\n");
//						break;
//			}
//	} 
//	while (in);
//	system("pause");
//	return 0;
//}
////���ֲ���
//#include<stdio.h>
//#include<stdlib.h>
//int binary_search(int arr[], int i,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 5;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	ret = binary_search(arr,i,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
//	}
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int password(char* s1, char* s2, int ret)
//{
//	int j = 0;
//	for (j = 0; s1[j] != '\0'&&s2[j] != 0;)
//	{
//		if (s1[j] == s2[j])
//		{
//			j++;
//		}
//		else
//		{
//			ret = 0;
//			break;
//		}
//	}
//	if (s1[j] == '\0'&&s2[j] == 0)
//	{
//		ret = 1;
//		return 1;
//	}
//}
//void menu()
//{
//	printf("������������������Ļ���\n");
//}
//ģ�������������δ����˳�
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	char arr[20];
	int i = 0;
	printf("�����������δ��󽫻��Զ��˳�����\n");
		for (i = 0 ; i < 3; i++)
		{
			printf("����������\n");
			scanf("%s",arr);
			if (strcmp(arr,"123654")==0)
			{
				printf("������ȷ\n");
				break;
			}
			else
			{
				printf("�������\n");
			}
		}
		if (i = 3);
		{
			printf("��������Ѿ��������Σ��˳�����\n");
	}
	system("pause");
	return 0;
}
////���ռ����ַ�
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char bam;
//	scanf_s("%c", &bam);
//	int asc = (int)bam;
//	if (asc<97 && asc>64)
//	{
//		asc = asc + 32;
//		printf("%c", asc);
//	}
//	else if (asc<123 && asc>96)
//	{
//		asc = asc - 32;
//		printf("%c", asc);
//	}
//	else
//	{
//		system("pause");
//		return 0;
//	}
//	system("pause");
//	return 0;
//}
