#define _GRT_SECUSE_NO_WARNINGS 1
//�жϴ��С��
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
//		printf("��С�˴洢ģʽ\n");
//	}
//	else
//	{
//		printf("�Ǵ�˴洢ģʽ\n");
//	}
//	system("pause");
//	return 0;
//}


//�Ż�
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
//		printf("��С�˴洢\n");
//	}
//	else
//	{
//		printf("�Ǵ�˴洢\n");
//	}
//	system("pause");
//	return 0;
//}

//ʹ���������Ż�
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
				printf("��С�˴洢\n");
			}
			else
			{
				printf("�Ǵ�˴洢\n");
			}
	system("pause");
	return 0;
}