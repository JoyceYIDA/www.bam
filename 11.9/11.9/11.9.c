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

	//1. 生成一个随机数

	//设置随机数的生成起点

	num = rand() % 100 + 1;//1-100

	//printf("%d\n", num);

	//2. 猜数字

	while (1)

	{

		printf("请猜数字:>");

		scanf("%d", &guess);

		if (guess<num)

		{

			printf("猜小了\n");

		}

		else if (guess > num)

		{

			printf("猜大了\n");

		}

		else

		{

			printf("恭喜你,猜对了\n");

			break;

		}

	}

}



int main()

{

	int input = 0;

	//在代码中只要执行一次就可以

	srand((unsigned int)time(NULL));

	do

	{

		menu();

		printf("请选择:>");

		scanf("%d", &input);

		switch (input)

		{

		case 1:

			game();

			break;

		case 0:

			printf("退出游戏\n");

			break;

		default:

			printf("选择错误\n");

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

//			return mid;//找到

//		}

//	}

//	return -1;//找不到

//}

//

//int main()

//{

//	int arr[] = {1,2,3,4,5,6,7,8,9,19};

//

//	//折半查找,二分查找

//	int ret = 0;

//	int k = 7;

//	int left = 0;

//	int right = sizeof(arr)/sizeof(arr[0])-1;

//	ret = binary_search(arr, k, left, right);

//	if(ret == -1)

//		printf("找不到\n");

//	else

//		printf("找到了,下标是:%d\n", ret);

//

//	return 0;

//}

