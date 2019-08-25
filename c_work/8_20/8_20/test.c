#define  _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//	  if (value % 2 == 1)
//	    count++;
//      value /=  2;
//	}
//	return count;
//}
//int main()
//{
//	printf("//写一个函数返回参数二进制中 1 的个数:\n");
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}


//#include <stdio.h>
//int count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((value >>i) & 1 == 1)
//			count++;
//	}
//	return count;
//
//}
//int main()
//{
//	printf("//写一个函数返回参数二进制中 1 的个数:\n");
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}


//int count_one_bits(int value)
//{
//   int count = 0;//	
//    //n=n&(n-1)
////	//1111-n
////	//1110-n-1
////	//1110-n
////	//1101-n-1
////	//1100-n
//	while(value)
//	{
//		value=value&(value-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	printf("//写一个函数返回参数二进制中 1 的个数:\n");
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}


//#include <stdio.h>
//void print_num(int n)
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		a[i] = n % 2;
//		i++;
//		n /= 2;
//		count++;
//	}
//	if (count % 2 == 0)
//	{
//		printf("偶数位：");
//		for (i = count-2; i >= 0; i -= 2)
//		{
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		printf("奇数位：");
//		for (i = count - 1; i >= 0; i -= 2)
//		{
//			printf("%d", a[i]);
//		}
//		printf("\n");
//	}
//	else
//	{
//		printf("偶数位：");
//		for (i = count - 2; i >= 0; i -= 2)
//		{
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		printf("奇数位：");
//		for (i = count - 1; i >= 0; i -= 2)
//		{
//			printf("%d", a[i]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	printf("获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列:\n");
//	int num = 0;
//    scanf("%d",&num);
//	print_num(num);
//	return 0;
//}

//int main()
//{
//	int m = 100;
//	int i = 0;
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (m>>i)&1);
//	}
//	printf("\n");
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (m>>i)&1);
//	}
//	printf("\n");
//	return 0;
//}
//


//#include<stdio.h> 
//void main() 
//{
//	printf("两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？输入例子 :1999 2299输出例子 : 7 \n");
//	unsigned int x = 0; 
//	unsigned int y = 0; 
//	unsigned int z = 0; 
//	int n = 0;
//	scanf("%d%d", &x, &y);
//	z = x^y; //位 不同为1
//	while (z) 
//	{
//		if (z % 2 == 1)
//		{
//			n++;
//		}
//		z /= 2;
//	}
//	printf("%d和%d的二进制表达中，有%d位不同。\n", x, y, n);
//}

//#include <stdio.h>
//int main()
//{
//	printf("打印杨辉三角:\n");
//	int a[9][9] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//           if (j == 0)
//	            arr[i][j] = 1;
//		     if(i==j)
//			    arr[i][j] = 1;
//		     if(i>1 && j>0)
//			    arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
//       }
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%2d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//#include <stdio.h>
//int main()
//{
//	int  murder = 0;
//	for (murder = 'A'; murder <= 'D'; murder++)
//	{
//		if ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D') == 3)
//		{
//			printf("murder is:%c\n", murder);//输出凶手为一个字符
//		}
//	}
//	return 0;
//}


//5位运动员加了10米台跳水比赛，有人让他们预测比赛结果A选手说：B第二，我第三；B选手说：我第二，E第四；C选手说：我第一，D第二；
//D选手说：C最后，我第三；E选手说：我第四，A第一；比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
/*#include <stdio.h>
int main()
{

	return 0;
}
			*/

//#include<stdio.h>
//int main()
//{
//	int A = 0;
//    int	B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((A == 3 )||( B == 2) && (B == 2) ||( E == 4) && (C == 1 )||( D == 2) && (D == 3) || (C == 5) && (E == 4 )|| (A == 1))
//							printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//						
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}
