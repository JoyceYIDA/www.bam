#define _GRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<time.h>
    void initboard(char board[ROW][COL])//初始化棋盘数组，一开始所有的格子都是空格
    {
		int x;
		int y;
	    for (x = 0; x < ROW; x++)
	    {
		for (y = 0; y < COL; y++)
		{
			board[x][y] = ' ';
		}
	    }//也可以用memset来初始化数组 头文件为#include<string.h>
		/*memset(board,' ', ROW*COL*sizeof(board[0][0]));*/
      }
	void displayboard(char board[ROW][COL],int row, int col)//打印棋盘
		{
		int x = 0;
			for (x = 0; x < ROW; x++)
			{
				printf(" %c| %c|%c \n",board[x][0],board[x][1],board[x][2]);
				if (x <ROW-1)
				{
					printf("--|--|--\n");//三子棋的棋盘只需要打印最中间的那一行
				}
			}
		}
	void playermove(char board[ROW][COL])
		{
			int x;
			int y;
			while (1)
			{
				printf("请输入你的坐标\n");
				scanf_s("%d %d", &x, &y);
				if (((x >= 1) && (x <=ROW)) && ((y >= 1) && (y <= COL)))
				{
					if (board[x-1][y-1] == ' ')
					{
						board[x-1][y-1] = 'o';
						break;
					}
					else
					{
						printf("输入坐标已被占用,请重新输入\n");
					}
				}
				else
				{
					printf("输入坐标有误,请重新输入\n");
				}
			}
		}
  void computermove(char board[ROW][COL])
		{
				int x;
				int y;
				srand((unsigned int)time(NULL));
				while (1)
				{
					x = rand() % ROW;
					y = rand() % COL;
					if (board[x][y] == ' ')
					{
						board[x][y] = 'x';
						break;
					}
				}
		}
	char win(char board[ROW][COL])
		{
			int x = 0;
			int y = 0;
			for (x = 0; x < ROW; x++)
			{
				if (((board[x][0] == board[x][1]) &&( board[x][1] == board[x][2] ))&& (board[x][0] != ' '))
					//行相同并且不是空格
					return board[x][0];
			}
			for (y = 0; y < COL; y++)
			{
				if (((board[0][y] == board[1][y]) &&( board[1][y] == board[2][y])) &&( board[0][y] != ' '))
					//列相同并且不是空格
					return board[0][y];
			}
			if ((((board[0][0] == board[1][1]) &&( board[1][1] = board[2][2])) ||
				((board[0][2] == board[1][1]) && (board[1][1] = board[2][0] ))
				&& (board[0][0] != ' ')))
				//对角线相同且不是空格
				return board[1][1];
			if (full(board, ROW, COL))//棋盘满了还没分出胜负就是平局
			{
				return 'q';
			}
			return ' ';
		}
		int full(char board[ROW][COL])
		{
			int x;
			int y;
			for (x = 0; x < ROW; x++)
			{
				for (y = 0; y < COL; y++)
				{
					if (board[x][y] == ' ')
						return 0;
				}
			}
		}