//打印无符号整形每一位
//#include <stdio.h>
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//函数求字符串长度
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//不创建临时变量求字符串长度 递归
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include <stdio.h>
//int factorial(int n)
//{
/*if (n <= 1) //数字大了栈溢出
{
return 1;
}
else
{
return n * factorial(n - 1);
}*/
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n--;
//	}
//	return result;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int fac = factorial(a);
//	printf("%d",fac);
//	return 0;
//}

//求n个斐波那契数 1 1 2 3 5 8
#include <stdio.h>
int fib(int i)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (i > 2)
	{
		a = b;
		b = c;
		c = a + b;
		i--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}