#define _GRT_SECURE_NO_WARNINGS 1
//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  f1;
	int f2;
	int f3;
	int  f4;
	int  f5;
	for (f1 = 1; f1 <=5; f1++)
	{
		for (f2 = 1; f2 <= 5; f2++)
		{
			for (f3 = 1; f3 <= 5; f3++)
			{
				for (f4 = 1; f4 <= 5; f4++)
				{
					for (f5 = 1; f5 <= 5; f5++)//每个人都说对了一半，那么就是一真一假，1+0=1
					{
						if ((((f2 == 2) + (f1 == 3)) == 1) &&
							(((f2 == 2) + (f5 == 4)) == 1) &&
							(((f3 == 1) + (f4 == 2)) == 1) &&
							(((f3 == 5) + (f4 == 3)) == 1) &&
							(((f5 == 4) + (f1 == 1)) == 1))
						{
							if (f1*f2*f3*f4*f5 == 120)
							{
								printf("%d %d %d %d %d", f1, f2, f3, f4, f5);
							}
						}
					}	
				}
			}
		}
	}
	system("pause");
	return 0;
}

//
//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。!='A'
//B说：是C。=='C'
//C说：是D。=='D'
//D说：C在胡说 !='D'
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//真为1 假为0 四个人有三个人为真 那四个人的和为3
//把A-D都判断一遍

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char who = '0';
//	for (who = 'A'; who <= 'D'; who++)
//	{
//		if ((who != 'A') + (who == 'C') + (who == 'D') + (who != 'D') == 3)
//		{
//			printf("%c是凶手\n", who);
//		}
//	}
//	system("pause");
//	return 0;
//}
////
////3.在屏幕上打印杨辉三角。
////1
////1 1
////1 2 1
////1 3 3 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	int x = 0;
//	int y = 0;
//	int arr[20][20] = { 0 };
//	printf("请输入你想要的行数\n");
//	scanf_s("%d", &n);
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y <= x; y++)
//		{
//			if ((y == 0) || (y == x))//第一列和对角线都是1
//			{
//				arr[x][y] = 1;
//			}
//		else
//				arr[x][y] = arr[x - 1][y - 1] + arr[x - 1][y];
//		}
//	}
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y <= x;y++)
//		{
//			printf("%d ", arr[x][y]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}