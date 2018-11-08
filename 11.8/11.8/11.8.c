#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "              ";
//	char arr2[] = "************* ";
//	int left = 0;
//	int right = strlen(arr1-1);
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		left--;
//		right++;
//	}
//	printf("%s", arr1);
//	system("pause");
//	return 0;
//}
////0-999之间的水仙花数
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int i = 0, j = 0, k = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			for (k = 0; k < 10; k++)
//			{
//				a = i * 100 + j * 10 + k * 1;
//				if (a == (i*i*i + j*j*j + k*k*k))
//					printf("%d ", a);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
////求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int Sn = 0;
//	scanf_s("%d", &a);
//    for (n = 0; n < 5; n++)
//	 {
//		Sn = Sn  + (a * pow(10, n));
//		sum = sum + Sn;
//	  }
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//输出一个菱形
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	char arr1[] = "                   ";
	char arr2[] = "*******************";
	char arr3[] = "                   ";
	int i = 0;
	int mid =(strlen(arr1)/2);
	int j = (strlen(arr1)-1)/ 2+1;//从中间往右的第一个数是j
	int k=0;
	int n =strlen(arr3)-1;
	while (i<=10)
	{
		arr1[mid] = arr2[mid];//第一次先换最中间的字符
		printf("%s\n",arr1);
		arr1[j] = arr2[j];//把第二个字符串的j位给第一个字符串的j位
			mid--;
			i++;
			j++;
	}
	while (k <= n)
	{
		arr2[n] = arr3[n];
		arr2[k] = arr3[k];
		printf("%s\n", arr2);
		k++;
		n--;
	}
	///*int i = 0;
	//int j = 0;
	//int k = 0;
	//for (i = 0; i <= 6; i++)
	//{
	//	for (j = 0; j <= 5 - i; j++)
	//	{
	//		printf(" ");
	//		for (k = 0; k <= 2 * i; k++)
	//		{
	//			printf("*");
	//		}
	//	}
	//	printf("\n");
	//}
	//for (i = 0; i <= 5; i++)
	//{
	//	for (j = 0; j <= i; j++)
	//	{
	//		printf(" ");
	//		for (k = 0; k <= 7 - 2 * i; k++)
	//		{
	//			printf("*");
	//		}
	//	}
	//	printf("\n");
	//}*/
	system("pause");
	return 0;
}
