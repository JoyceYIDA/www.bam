#define _GRT_SECUSE_NO_WARNINGS 1
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
////�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
		j = value & 1;//ת������������ ���λ��ʼ����
		value >>= 1;//����һλ ��2��Ч��
		ret = ret + (j << (31 - i));//��ÿһλ������
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
	////}//�������������
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

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
////a+(b-a)/2
////λ����
////a&bͬһ��bitλ�ϵ���ͬ��ƽ��ֵa^bͬһ��bitλ�ϵĲ���ͬ��λ�ĺ�
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
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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
////		ret = ret^arr[i];//һ�������0�������� �ɶԳ��ֵ�����������
////		//(a^b)^c=a^(b^c)
////	}
////	printf("%d", ret);
////	system("pause");
////	return 0;
////}
//
////4.
////��һ���ַ����������Ϊ:"student a am i",
////			���㽫��������ݸ�Ϊ"i am a student".
////			Ҫ��
////			����ʹ�ÿ⺯����
////			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
////
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void reverse(char* right,char* left)//������ ���õ�ʱ��ʵ������Ϳ�����
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
//char* print(char * s1)//��ӡ���� ��ʵ�ְ������ַ��������� Ȼ���ٰѵ���һ������һ�����ֵ�����
//{
//	int len = mystrlens(s1);
//	char* s = s1;
//	char* e = NULL;
//	char* i = s1;
//	reverse(s1+len-1,s1);//���������ַ���
//	while (*s1)
//	{
//		s = s1;
//		while ((*s1 != '\0') && (*s1 != ' '))
//		{
//			s1++;
//		}//�ҵ��ո�
//		e = s1 - 1;
//		reverse(e, s);//���򵥴������ĸ
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
