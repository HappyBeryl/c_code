#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//�ݹ�ʵ�����n��쳲�������
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


//�ݹ�ʵ�����n��쳲�������
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


//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//#include <stdio.h>
//int mul(int m, int j)
//{
//	if (j > 0)
//	{
//		return m * mul(m, j-1);
//		j--;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	int ret = mul(n, k);
//	printf("%d", ret);
//
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include <stdio.h>
//int DigitSum(int n)
//{
//	if (n > 0)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d",ret);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//int my_strlen(char *s)//c�����Ԫ�ص�ַ
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

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

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

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�ʵ�֣��������ַ����е��ַ��������С�Ҫ�󣺲���ʹ��C�������е��ַ�������������

//#include <stdio.h>
//char reverse_string(char* string)
//{
//	if (*string == '\0')
//	{
//		return;
//	}
//	reverse_string(string + 1);
//	printf("%c ", *string);
//}
//int main()
//{
//	char str[] = "abcdef";
//	reverse_string(str);
//	return 0;
//}