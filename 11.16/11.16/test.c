#define _GRT_SECURE_NO_WARNINGS 1
////1.
////写一个函数返回参数二进制中 1 的个数
////比如： 15 0000 1111 4 个 1
////程序原型：
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
//	printf("输入一个数");
//		scanf_s("%d", &value);
//		ret=count_one_bits(value);
//		printf("%d", ret);
//	system("pause");
//	return 0;
//}
////	// 返回 1的位数 
////}
////
////2.获取一个数二进制序列中所有的偶数位和奇数位，
////分别输出二进制序列。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	printf("请输入一个数\n");
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
	//算出要求的数的32位二进制序列（反向倒置的二进制）
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", a[i]);//把反向的二进制按正确的顺序输出，最高位就是最低位，奇数序列每次位数减2
	}
	printf("\n");
	for (i = 30; i>= 0; i -=2)
	{
		printf("%d", a[i]);//和奇数列同理
	}
	system("pause");
	return 0;
}

//3. 输出一个整数的每一位。
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
//	printf("请输入一个整数\n");
//	scanf_s("%d", &num);
//	binary(num);
//	system("pause");
//	return 0;
//}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
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
//	printf("请输入两个数\n");
//	scanf_s("%d %d", &m, &n);
//	i = m^n;//输入的两个数按位异或，相同为0，不同则为1
//	while (k--)//当32个比特位都比较完了就结束
//	{
//		if ((i & 1) == 1)//异或的结果和1按位与，真则为1，假则为0，只有异或的结果为1时进入循环
//		{
//			j++;//记录异或为1出现的次数，每出现一次1，就是有几个相同的比特位
//		}
//		i = i >> 1;//32个比特位每比较完右移一位进入下次循环
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