#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
	void game()
	{
		char mine[ROWS][COLS] = { 0 };//���ú��׵���Ϣ
		char show[ROWS][COLS] = { 0 };//����Ų�õ��׵���Ϣ
		initboard(mine, ROWS, COLS,'0');
		initboard(show, ROWS, COLS,'*');
		displayboard(mine, ROW, COL);
		displayboard(show, ROW, COL);
		setmine(mine, ROW, COL);//������
		displayboard(mine, ROW, COL);
		findmine(mine, show, ROW, COL);//�Ų���
		srand((unsigned int)NULL);
	}
	void menu()
	{
		printf("************************\n");
		printf("*****1.play 0.exit******\n");
		printf("************************\n");
	}
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
			default:printf("ѡ�����\n");
				break;
			}
		} while (1);
	}
	int main()
	{
		test();
	system("pause");
	return 0;
}