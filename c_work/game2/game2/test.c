#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("************  1. play   ***\n");
	printf("************  2.exit    ***\n");
	printf("***************************\n");
}

void game()
{
	//存放雷的信息
	char mine[ROWS][COLS] = { 0 };//'0'
	//排查出来雷的信息
	char show[ROWS][COLS] = { 0 };//'*'
	InitBoard (mine,ROWS,COLS,'0');
	InitBoard (show,ROWS,COLS,'*');
	DisplayBoard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排雷
	FindMine(mine, show, ROW, COL);


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("输入错误\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}