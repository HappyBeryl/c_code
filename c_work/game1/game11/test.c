#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };//创建数组
	InitBoard(board, ROW, COL);//初始化数组
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家走
		DisplayBoard(board, ROW, COL);
	    ret = Is_Win(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑走
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
}
void meun()
{
	printf("**************************\n");
	printf("********  1.play  ********\n");
	printf("********  2.exit  ********\n");
	printf("**************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time (NULL));
	do
	{
		meun();
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("输入有误，请重新输入\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}