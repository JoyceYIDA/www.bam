#define _GRT_SECURE_NO_WARNINGS 1
////1.
////дһ���������ز����������� 1 �ĸ���
////���磺 15 0000 1111 4 �� 1
////����ԭ�ͣ�
////int count_one_bits(unsigned int value)
////{
//#include<stdio.h>
//#include<stdlib.h>
//int count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int count = 0;
//	while (value != 0)
//	{
//		i = value % 2;
//
//		if (i == 1)
//		{
//			count++;
//		}
//		value = value / 2;
//	}
//	return count;
//}
//int main()
//{
//	int value = 0;
//	int ret = 0;
//	printf("����һ����");
//		scanf_s("%d", &value);
//		ret=count_one_bits(value);
//		printf("%d", ret);
//	system("pause");
//	return 0;
//}
////	// ���� 1��λ�� 
////}
////
////2.��ȡһ�������������������е�ż��λ������λ��
////�ֱ�������������С�
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	printf("������һ����\n");
	scanf_s("%d", &num);
	int i = 0;
	int a[32] = { 0 };
	for (i = 0; i < 32; i += 2)
	{
		if (((num >> i) & 1) == 1)
		{
			a[i] = 1;
		}
		else
		{
			a[i] = 0;
		}
	}
	//���Ҫ�������32λ���������У������õĶ����ƣ�
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", a[i]);//�ѷ���Ķ����ư���ȷ��˳����������λ�������λ����������ÿ��λ����2
	}
	printf("\n");
	for (i = 30; i>= 0; i -=2)
	{
		printf("%d", a[i]);//��������ͬ��
	}
	system("pause");
	return 0;
}

//3. ���һ��������ÿһλ��
////
//#include<stdio.h>
//#include<stdlib.h>
//void binary(int num)
//{
//	int a[32] = { 0 };
//	int i = 0;
//	if (num > 0)
//	{
//		binary(num / 2);
//		a[i] = num % 2;
//	}
//	printf("%d ", a[i]);
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	printf("������һ������\n");
//	scanf_s("%d", &num);
//	binary(num);
//	system("pause");
//	return 0;
//}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
////
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int m, n;
//	int i = 0;
//	int j = 0;
//	int k = 32;
//	/*char a1[32] = { 0 };
//	char a2[32] = { 0 };*/
//	printf("������������\n");
//	scanf_s("%d %d", &m, &n);
//	i = m^n;//�������������λ�����ͬΪ0����ͬ��Ϊ1
//	while (k--)//��32������λ���Ƚ����˾ͽ���
//	{
//		if ((i & 1) == 1)//���Ľ����1��λ�룬����Ϊ1������Ϊ0��ֻ�����Ľ��Ϊ1ʱ����ѭ��
//		{
//			j++;//��¼���Ϊ1���ֵĴ�����ÿ����һ��1�������м�����ͬ�ı���λ
//		}
//		i = i >> 1;//32������λÿ�Ƚ�������һλ�����´�ѭ��
//	}
//	printf("%d", j);
//	/*while (m != 0)
//	{
//		a1[i] = m % 2;
//		m = m / 2;
//		i++;
//	}
//	while (n != 0)
//	{
//		a2[i] = n % 2;
//		n = n / 2;
//		i++;
//	}*/
//
//	system("pause");
//	return 0;
//}
//