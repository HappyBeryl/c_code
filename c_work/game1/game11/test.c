#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };//��������
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�����
		DisplayBoard(board, ROW, COL);
	    ret = Is_Win(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//������
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
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
				printf("������������������\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}