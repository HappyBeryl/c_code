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
	//����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//'0'
	//�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//'*'
	InitBoard (mine,ROWS,COLS,'0');
	InitBoard (show,ROWS,COLS,'*');
	DisplayBoard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//����
	FindMine(mine, show, ROW, COL);


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("�������\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}