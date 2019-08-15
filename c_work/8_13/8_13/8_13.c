#define _CRT_SECURE_NO_WARNINGS 1

//输出菱形
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//		for (i = 0; i < line - 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i ; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < (line - 1 - i) * 2 - 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	return 0;
//}

////判断水仙花数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 0;
//		int tmp = 0;
//		int sum = 0;
//		tmp = i; //不能在函数内部改变变量
//		//求位数
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		//求各位的count次方和
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d",&a);
//	while (n < 5)
//	{
//		i = i * 10 + a;
//		sum += i;
//		n++;
//	}
//	printf("%d",sum);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tem = 0;
//	scanf("%d %d\n", &a,&n);
//	for (i = 0; i < n;i++)
//	{
//		tem = tem * 10 + a;
//		sum += tem;
//	}
//	printf("%d", sum);
//	return 0;
//}

//计算n 的阶乘
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		s*= i;//s=s*i;
//	}
//	printf("%d",s);
//	return 0;
//}

//计算1-10的阶乘之和
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		k = 1;//必须给k初始化
//		for(j = 1; j <= i
//			; j++)
//		{
//			k *= j; 
//		}
//    sum += k;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);//5
//	//1 2 6 = 9
//	for(n=1; n<=10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//