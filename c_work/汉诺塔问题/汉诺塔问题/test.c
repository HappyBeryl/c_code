//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int i = 0;
//void move(int n, char from, char to)
//{
//	i++;
//	printf("第%d步将%d号盘子%c<----->%c\n",i, n, from, to);
//}
//Hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//	{
//		move(n, A, C);
//	}
//	else
//	{
//		Hanoi(n-1,A,C,B);
//		move(n,A,C);
//		Hanoi(n-1,B,A,C);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	printf("共%d步\n", i);
//	return 0; 
//}
//
//
#include <stdio.h>
int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}
