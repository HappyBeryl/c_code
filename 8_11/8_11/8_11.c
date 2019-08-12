#define_CRT_SECURE_NO_WARNINGS 1
// 给定两个整形变量的值，将两个值的内容进行交换。 
#include <stdio.h>
int main()
{
	int a = 100;
	int b = 200;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	return 0;
}
//不允许创建临时变量，交换两个数的内容
#include <stdio.h>
int main()
{
	int a = 100;
	int b = 200;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	getchar();
	return 0;
}
//异或法
#include <stdio.h>
int main()
{
	int num1 = 3;
	int num2 = 5;
	//011
	//101
	//110
	//110与011异或是101 110与101异或是011
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;
	printf("%d %d",num1,num2);
	getchar();
	return 0;
}

//求10 个整数中最大值
#include <stdio.h>
int main()
{
	int a[10] = { 15, 4, 3, 9, 7, 8, 1, 2, 5, 6 };
	int max = a[0];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	printf("%d", max);
	return 0;
}
//将三个数按从大到小输出
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int t = 0;
	int a[3] = { 3, 7, 4 };
	for (i = 1; i < 3; i++)
	{
		for (j = 0; j < 3 - i; j++)
		{
			if (a[j]<a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	getchar();
	return 0;
}


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

//求两个数的最大公约数。
//辗转相除法
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int y = 0;
	scanf("%d %d", &a, &b);
	while (a%b)
	{
      	        y = a%b;
		a = b;
		b = y;
	}
	printf("%d\n", b);
	return 0;
}
//最大公倍数：a*b/最大公约数

