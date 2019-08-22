#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//递归实现求第n个斐波那契数
//int fit(int m)
//{
//	if (m <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fit(m - 1) + fit(m - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fit(n);
//	printf("%d", ret);
//	return 0;
//}


//递归实现求第n个斐波那契数
//#include <stdio.h>
//int fit(int m)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (m > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		m--;
//	}
//	printf("%d", c);
//}
//
//int main()
//{
//	int c = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fit(n);
//	return 0;
//}


//编写一个函数实现n^k，使用递归实现
//#include <stdio.h>
// double Pow(int m, int j)
// {
//	if (j >= 1)
//	{
//		return 1.0 * m * Pow(m, j-1);	
//	}
//	else if(j == 0)
//	{
//		return 1;
//	}
//	else
//   {
//		return 1.0 / Pow(m, -j);
//   }
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#include <stdio.h>
//int DigitSum(unsigned int n)
//{
  //   if (n<= 9)
    //  {
	//     return n;
   //   }
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d",ret);
//	return 0;
//}


//递归和非递归分别实现strlen
//#include <stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p-s;
//}
//int main()
//{
//	char str[] = "abcdef";
//  int len = my_strlen(&str);
//	printf("%d\n",len);
//	return 0;
//}


//#include <stdio.h>
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char *s)//c存放首元素地址
//{
//	if (*s == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(s + 1);
//	}
//}
//int main()
//{
//	char str[] = "abcdef";
//	int len = my_strlen(&str);
//	printf("%d\n",len);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		j *= i;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//#include <stdio.h>
//int fib(int m)
//{
//	int result = 1;
//	while (m > 1)
//	{
//		result *= m;
//		m--;
//	}
//	return result;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}


//#include <stdio.h>
//int factorial(int m)
//{
//	if (m == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return m*factorial(m - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = factorial(n);
//	printf("%d", ret);
//	return 0;
//}

//递归方式实现打印一个整数的每一位
//#include <stdio.h>
//void print(int m)
//{
//	if (m > 9)
//	{
//		print(m / 10);
//	}
//	printf("%d ", m % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）实现：将参数字符串中的字符反向排列。要求：不能使用C函数库中的字符串操作函数。
#include <stdio.h>
#include <assert.h>
int my_strlen(char* str)
{
	assert(str != NULL);
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	int len = my_strlen(str);
	char* left = str;
	char* right = len + str - 1;
	assert(str != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}



//#include <stdio.h>
//#include <assert.h>
//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while(*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//char reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	(*str) = *(str + len-1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}