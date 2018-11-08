//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i;
//		scanf_s("%d", &i);
//		if (i >= 1000 & i <= 2000)
//		{
//			if (i % 4 == 0)
//			{
//				if (i % 100 != 0)
//				{
//					printf("%d是闰年\n", i);
//				}
//			}
//			if (i % 400 == 0)
//			{
//				printf("%d是闰年\n", i);
//			}
//		}
//			else
//				printf("请输入1000年-2000年之间的年份");
	///*int i, j;
	//for (i = 101; i <= 200; i += 2)
	//{
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i%j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j == i)
	//	{
	//		printf("%d\n", i);
	//	}
	//}
	//int x, y, z;
	//for (x = 1; x < 10; x++)
	//{
	//	for (y = 1; y <= x; y++)
	//	{
	//		z = x*y;
	//		printf("%d*%d=%-3d", y, x, z);
	//	}
	//	printf("\n");
	//}*/
//	system("pause");
//	return 0;
//}
//#/*include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, j;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//		}*/
//	}
//	system("pause");
//	return 0;
//}
//
#define _CRT_SECURE_NO_WARNINGS 1
//输入两个变量的值，交换两个变量
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x, y;
//	scanf_s("%d %d",&x,&y);
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	printf("%d %d",x,y);
//	system("pause");
//	return 0;
//}
////不使用中间变量的交换两变量的值(异或）
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x, y;
//	scanf_s("%d %d", &x, &y);
//	x = x^y;
//	y = y^x;
//	x = x^y;
//	printf("%d %d", x, y);
//	system("pause");
//	return 0;
//}
////将三个数按从大到小输出
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x, y, z;
//	printf("请输入三个数\n");
//	scanf_s("%d%d%d",& x,& y,& z);
//	if (x < y)
//	{
//		x = x + y;
//		y = x - y;
//		x = x - y;
//	}//先比较前两个数的最大值，把最大值赋给x
//	if (x < z)
//	{
//		x = x + z;
//		z = x - z;
//		x = x - z;
//	}//前两个数的最大值和第三个数比较，把最大值赋给x,这时三个数的最大值是x
//	if (y < z)
//	{
//		y = y + z;
//		z = y - z;
//		y = y - z;
//	}//后两个数的最大值赋给y
//	printf("这三个数按从大到小的顺序是%d %d %d", x, y, z);
//	system("pause");
//	return 0;
//}
//
////将数组A中的内容和数组B中的内容进行交换（数组一样大）
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int a[7] = { 12, 3, 56, 81, 22, 54, 59 };
//	int b[7] = { 33, 9, 53, 27, 86, 25, 24 };
//	int c;
//	for (i = 0; i < 7; i++)
//	{
//		c = a[i];
//		a[i] = b[i];
//		b[i] = c;
//		printf("%d  ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d  ", b[i]);
//	}
//	system("pause");
//	return 0;
//}
//////计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;//分子都是1
//	float a = 1;
//	float b = 0;
//	float c = 0;
//	float sum = 0;
//	{
//		for (a = 1; a <= 100; a =a+ 2)
//		{
//			 b = (i / a) + b;//计算所有分母为奇数的分数的和
//		}
//		for (a = 2; a <= 100; a =a+ 2)
//		{
//			 c = (i / a) + c;//计算所有分母为偶数的分数的和
//		}
//		sum = b - c + sum;
//		printf("sum=%f", sum);
//	}
//	system("pause");
//	return 0;
//}
//1到100中出现9的次数
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1;
	int b = 0;
	for (a = 1; a < 100; a++)
	{
		if (a % 10 == 9)//找出1-100之间个位出现9的次数
		{
			b++;
		}
		if (a / 10 == 9)//找出90-99之间9出现的次数
		{
			b++;
		}
	}
	printf("9出现了%d次",b++);
	system("pause");
	return 0;
}