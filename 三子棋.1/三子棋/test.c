#define _GRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"game.h"
#include<time.h>
#include<Windows.h>
void menu()
{
	printf("*************************\n");
	printf("******1.play 0.exit******\n");
	printf("*************************\n");
}
void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	initboard(board,ROW,COL);
	displayboard(board, ROW, COL);
	do
	{
		printf("玩家走\n");
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = win(board);
		printf("电脑走\n");
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = win(board);
	} while (ret == ' ');
		if (ret == 'o')
			printf("恭喜你，你赢啦！\n");
		else if (ret == 'x')
			printf("很遗憾，电脑赢了\n");
		else if (ret == 'q')
			printf("平局啦！\n");
		displayboard(board, ROW, COL);

}//判断输赢之后打印棋盘

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}