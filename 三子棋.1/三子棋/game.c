#define _GRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<time.h>
    void initboard(char board[ROW][COL])//��ʼ���������飬һ��ʼ���еĸ��Ӷ��ǿո�
    {
		int x;
		int y;
	    for (x = 0; x < ROW; x++)
	    {
		for (y = 0; y < COL; y++)
		{
			board[x][y] = ' ';
		}
	    }//Ҳ������memset����ʼ������ ͷ�ļ�Ϊ#include<string.h>
		/*memset(board,' ', ROW*COL*sizeof(board[0][0]));*/
      }
	void displayboard(char board[ROW][COL],int row, int col)//��ӡ����
		{
		int x = 0;
			for (x = 0; x < ROW; x++)
			{
				printf(" %c| %c|%c \n",board[x][0],board[x][1],board[x][2]);
				if (x <ROW-1)
				{
					printf("--|--|--\n");//�����������ֻ��Ҫ��ӡ���м����һ��
				}
			}
		}
	void playermove(char board[ROW][COL])
		{
			int x;
			int y;
			while (1)
			{
				printf("�������������\n");
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
						printf("���������ѱ�ռ��,����������\n");
					}
				}
				else
				{
					printf("������������,����������\n");
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
					//����ͬ���Ҳ��ǿո�
					return board[x][0];
			}
			for (y = 0; y < COL; y++)
			{
				if (((board[0][y] == board[1][y]) &&( board[1][y] == board[2][y])) &&( board[0][y] != ' '))
					//����ͬ���Ҳ��ǿո�
					return board[0][y];
			}
			if ((((board[0][0] == board[1][1]) &&( board[1][1] = board[2][2])) ||
				((board[0][2] == board[1][1]) && (board[1][1] = board[2][0] ))
				&& (board[0][0] != ' ')))
				//�Խ�����ͬ�Ҳ��ǿո�
				return board[1][1];
			if (full(board, ROW, COL))//�������˻�û�ֳ�ʤ������ƽ��
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