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
		printf("�����\n");
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = win(board);
		printf("������\n");
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = win(board);
	} while (ret == ' ');
		if (ret == 'o')
			printf("��ϲ�㣬��Ӯ����\n");
		else if (ret == 'x')
			printf("���ź�������Ӯ��\n");
		else if (ret == 'q')
			printf("ƽ������\n");
		displayboard(board, ROW, COL);

}//�ж���Ӯ֮���ӡ����

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:printf("ѡ�����,������ѡ��\n");
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