#define _GRT_SECUSE_NO_WARNINGS 1
//判断大端小端
//#include<stdio.h>
//#include<stdlib.h>
//int check_sys()
//{
//	int i = 1;
//	char *p = (char*)&i;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("是小端存储模式\n");
//	}
//	else
//	{
//		printf("是大端存储模式\n");
//	}
//	system("pause");
//	return 0;
//}


//优化
//#include<stdio.h>
//#include<stdlib.h>
//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;
//}
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("是小端存储\n");
//	}
//	else
//	{
//		printf("是大端存储\n");
//	}
//	system("pause");
//	return 0;
//}

//使用联合体优化
#include<stdio.h>
#include<stdlib.h>

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	if (check_sys() == 1)
			{
				printf("是小端存储\n");
			}
			else
			{
				printf("是大端存储\n");
			}
	system("pause");
	return 0;
}