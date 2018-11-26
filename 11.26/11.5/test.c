#define _GRT_SECUSE_NO_WARNINGS 1


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////memcpy
//
//struct{
//	char dream[40];
//	int age;
//}person,person_copy;
//
//int main()
//{
//	char mydream[] = "yida want to be a soldier";
//	memcpy(person.dream, mydream, strlen(mydream) + 1);//����memcpy�����ַ���
//	person.age = 19;
//	memcpy(&person_copy, &person, sizeof(person));//�ٿ����ṹ���������
//	printf("person_copy:%s,%d\n", person_copy.dream, person_copy.age);
//	system("pause");
//	return 0;
//}
//ģ��ʵ��memmove
#include<stdio.h>
#include<stdlib.h>

void * mymemmove(void *dst, const void* src, size_t count)
{
	void *ret = dst;
	if (dst <= src || (char*)dst >= ((char*)src + count))
	{
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else
	{
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
	return ret;
}