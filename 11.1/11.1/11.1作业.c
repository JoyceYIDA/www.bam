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
//					printf("%d������\n", i);
//				}
//			}
//			if (i % 400 == 0)
//			{
//				printf("%d������\n", i);
//			}
//		}
//			else
//				printf("������1000��-2000��֮������");
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
//��������������ֵ��������������
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
////��ʹ���м�����Ľ�����������ֵ(���
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
////�����������Ӵ�С���
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x, y, z;
//	printf("������������\n");
//	scanf_s("%d%d%d",& x,& y,& z);
//	if (x < y)
//	{
//		x = x + y;
//		y = x - y;
//		x = x - y;
//	}//�ȱȽ�ǰ�����������ֵ�������ֵ����x
//	if (x < z)
//	{
//		x = x + z;
//		z = x - z;
//		x = x - z;
//	}//ǰ�����������ֵ�͵��������Ƚϣ������ֵ����x,��ʱ�����������ֵ��x
//	if (y < z)
//	{
//		y = y + z;
//		z = y - z;
//		y = y - z;
//	}//�������������ֵ����y
//	printf("�����������Ӵ�С��˳����%d %d %d", x, y, z);
//	system("pause");
//	return 0;
//}
//
////������A�е����ݺ�����B�е����ݽ��н���������һ����
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
//////����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;//���Ӷ���1
//	float a = 1;
//	float b = 0;
//	float c = 0;
//	float sum = 0;
//	{
//		for (a = 1; a <= 100; a =a+ 2)
//		{
//			 b = (i / a) + b;//�������з�ĸΪ�����ķ����ĺ�
//		}
//		for (a = 2; a <= 100; a =a+ 2)
//		{
//			 c = (i / a) + c;//�������з�ĸΪż���ķ����ĺ�
//		}
//		sum = b - c + sum;
//		printf("sum=%f", sum);
//	}
//	system("pause");
//	return 0;
//}
//1��100�г���9�Ĵ���
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1;
	int b = 0;
	for (a = 1; a < 100; a++)
	{
		if (a % 10 == 9)//�ҳ�1-100֮���λ����9�Ĵ���
		{
			b++;
		}
		if (a / 10 == 9)//�ҳ�90-99֮��9���ֵĴ���
		{
			b++;
		}
	}
	printf("9������%d��",b++);
	system("pause");
	return 0;
}