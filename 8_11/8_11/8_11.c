 //#define_CRT_SECURE_NO_WARNINGS 1
//��һ��
//#include <stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d", a, b);
//	return 0;
//}
//�ڶ���
//#include <stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 200;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	getchar();
//	return 0;
//}
#include <stdio.h>
int main()
{
	int num1 = 3;
	int num2 = 5;
	//011
	//101
	//110
	//110��011�����101 110��101�����011
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;
	printf("%d %d",num1,num2);
	getchar();
	return 0;
}

//������
//#include <stdio.h>
//int main()
//{
//	int a[10] = { 15, 4, 3, 9, 7, 8, 1, 2, 5, 6 };
//	int max = a[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	int a[3] = { 3, 7, 4 };
//	for (i = 1; i < 3; i++)
//	{
//		for (j = 0; j < 3 - i; j++)
//		{
//			if (a[j]<a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	getchar();
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{

		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d\n", b);
	return 0;
}

//������
//շת�����
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int y = 0;
//	scanf("%d %d", &a, &b);
//	while (a%b)
//	{
//		y = a%b;
//		a = b;
//		b = y;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//
��󹫱�����a*b/���Լ��

