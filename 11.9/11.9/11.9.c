#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <windows.h>

#include <stdlib.h>

#include <time.h>


void menu()

{

	printf("**************************\n");

	printf("******* 1. play *******\n");

	printf("******* 0. exit *******\n");

	printf("**************************\n");

}


void game()

{

	int num = 0;

	int guess = 0;

	//1. ����һ�������

	//������������������

	num = rand() % 100 + 1;//1-100

	//printf("%d\n", num);

	//2. ������

	while (1)

	{

		printf("�������:>");

		scanf("%d", &guess);

		if (guess<num)

		{

			printf("��С��\n");

		}

		else if (guess > num)

		{

			printf("�´���\n");

		}

		else

		{

			printf("��ϲ��,�¶���\n");

			break;

		}

	}

}



int main()

{

	int input = 0;

	//�ڴ�����ֻҪִ��һ�ξͿ���

	srand((unsigned int)time(NULL));

	do

	{

		menu();

		printf("��ѡ��:>");

		scanf("%d", &input);

		switch (input)

		{

		case 1:

			game();

			break;

		case 0:

			printf("�˳���Ϸ\n");

			break;

		default:

			printf("ѡ�����\n");

			break;

		}

	} while (input);

	return 0;

}



//

//int binary_search(int arr[], int k, int left, int right)

//{

//	while(left<=right)

//	{

//		int mid = left+(right-left)/2;

//		if(arr[mid] > k)

//		{

//			right = mid-1;

//		}

//		else if(arr[mid] < k)

//		{

//			left = mid+1;

//		}

//		else

//		{

//			return mid;//�ҵ�

//		}

//	}

//	return -1;//�Ҳ���

//}

//

//int main()

//{

//	int arr[] = {1,2,3,4,5,6,7,8,9,19};

//

//	//�۰����,���ֲ���

//	int ret = 0;

//	int k = 7;

//	int left = 0;

//	int right = sizeof(arr)/sizeof(arr[0])-1;

//	ret = binary_search(arr, k, left, right);

//	if(ret == -1)

//		printf("�Ҳ���\n");

//	else

//		printf("�ҵ���,�±���:%d\n", ret);

//

//	return 0;

//}

