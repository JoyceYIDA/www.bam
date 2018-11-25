#define _GRT_SECUSE_NO_WARNINGS 1
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
////如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int j = 0;
	unsigned int ret = 0;
	for (i = 0; i < 32; i++)
	{
		j = value & 1;//转换二进制序列 最低位开始排列
		value >>= 1;//右移一位 除2的效果
		ret = ret + (j << (31 - i));//把每一位加起来
	}
	////while (i < 32)
	////{
	////	if (arr[i] & 1 == 1)
	////	{
	////		arr[i] = 1;
	////		i++;
	////	}
	////	else
	////	{
	////		arr[i] = 0;
	////		i++;
	////	}
	////	value = value >> 1;
	////}//求出二进制序列
	return ret;
}

int main()
{	
	unsigned int value = 0;
	scanf_s("%u", &value);
    printf("%u\n", reverse_bit(value));
	system("pause");
	return 0;
}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
////a+(b-a)/2
////位运算
////a&b同一个bit位上的相同的平均值a^b同一个bit位上的不相同的位的和
//#include<stdio.h>
//#include<stdlib.h>
//int aver(int a, int b)
//{
//	int c = (a&b) + (a^b)/2;
//	return c;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int ret;
//	ret = aver(a, b);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
////
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
////	int arr[20] = { 2,3,4,6,5,3,2,6,7,4,7 };
////	int i = 0;
////	int ret = 0;
////	for (i = 0; i < 20; i++)
////	{
////		ret = ret^arr[i];//一个数异或0是它本身 成对出现的数都抵消了
////		//(a^b)^c=a^(b^c)
////	}
////	printf("%d", ret);
////	system("pause");
////	return 0;
////}
//
////4.
////有一个字符数组的内容为:"student a am i",
////			请你将数组的内容改为"i am a student".
////			要求：
////			不能使用库函数。
////			只能开辟有限个空间（空间个数和字符串的长度无关）。
////
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void reverse(char* right,char* left)//逆序函数 调用的时候实现逆序就可以了
//{
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int mystrlens(const char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		*arr++;
//	}
//	return count;
//}
//char* print(char * s1)//打印函数 先实现把整个字符串都逆序 然后再把单词一个部分一个部分的逆序
//{
//	int len = mystrlens(s1);
//	char* s = s1;
//	char* e = NULL;
//	char* i = s1;
//	reverse(s1+len-1,s1);//逆序整个字符串
//	while (*s1)
//	{
//		s = s1;
//		while ((*s1 != '\0') && (*s1 != ' '))
//		{
//			s1++;
//		}//找到空格
//		e = s1 - 1;
//		reverse(e, s);//逆序单词里的字母
//		if (*s1 == ' ')
//		{
//			s1++;
//		}
//	}
//	return i;
//}
//
//int main()
//{
//	char s1[] = "student a am i";
//	print(s1);
//	printf("%s\n", s1);
//	system("pause");
//	return 0;
//}
