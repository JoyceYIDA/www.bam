#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void initboard(char board[ROWS][COLS], int rows, int cols,char set)//��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 1; i < rows; i++)
	{
		for (j = 1; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
	//memset(&board[0][0],set,cols*rows*sizeof(board[0][0]));
}
void displayboard(char board[ROWS][COLS], int row, int col)//��ӡ����
{
	int x = 0;
	int y = 0;
	for (x = 0; x <= col; x++)
	{
		printf("%d ",x);//����һ�б�������
	}
	printf("\n");
	for (x = 1; x <= row; x++)
	{
		printf("%d ", x);//����һ�б�������
		for (y = 1; y <= col; y++)
		{
			printf("%c ", board[x][y]);
		}
		printf("\n");
	}
	printf("\n");
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASYCOUNT;
	while (count)
	{
		int x = rand() % 9 + 1;//������õ���Ӧ���Ǻ������궼˵��1��9
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';//�������ó��ַ�1
			count--;
		}
	}
}
int getmine(char mine[ROWS][COLS],int x,int y )
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y + 1] +
		mine[x + 1][y] + mine[x - 1][y + 1] - 8 * '0');//ͳ�ƣ�x,y����Χ�м�����
}
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;
	while (win < (ROW*COL - EASYCOUNT))
	{
		printf("�������������\n");
		scanf_s("%d %d", x, y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����\n");
				displayboard(mine, ROWS, COLS);
				break;
			}
			else
			{
				int count = getmine;
				show[x][y] = count + '0';
				displayboard(show, ROWS, COLS);
				break;
			}
		}
		else
		{
			printf("�������겻�Ϸ�������������\n");
		}
	}
}