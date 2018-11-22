#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
	void game()
	{
		char mine[ROWS][COLS] = { 0 };//布置好雷的信息
		char show[ROWS][COLS] = { 0 };//存放排查好的雷的信息
		initboard(mine, ROWS, COLS,'0');
		initboard(show, ROWS, COLS,'*');
		displayboard(mine, ROW, COL);
		displayboard(show, ROW, COL);
		setmine(mine, ROW, COL);//设置雷
		displayboard(mine, ROW, COL);
		findmine(mine, show, ROW, COL);//排查雷
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
			default:printf("选择错误\n");
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