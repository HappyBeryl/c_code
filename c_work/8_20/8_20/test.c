#define  _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	int r = 0;
//	while (value != 0)
//	{
//	  r = value % 2;
//	  value = value / 2;
//	  if (r == 1)
//	  {
//		count++;
//	  }
//	}
//	return count;
//}
//int main()
//{
//  printf("//дһ���������ز����������� 1 �ĸ���:\n")
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
//		printf("ż��λ��");
//		for (i = count-2; i >= 0; i -= 2)
//		{
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		printf("����λ��");
//		for (i = count - 1; i >= 0; i -= 2)
//		{
//			printf("%d", a[i]);
//		}
//		printf("\n");
//	}
//	else
//	{
//		printf("ż��λ��");
//		for (i = count - 2; i >= 0; i -= 2)
//		{
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		printf("����λ��");
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
//	printf("��ȡһ�������������������е�ż��λ������λ���ֱ��������������:\n");
//	int num = 0;
//    scanf("%d",&num);
//	print_num(num);
//	return 0;
//}


//#include<stdio.h> 
//void main() 
//{
//	printf("����int��32λ������m��n�Ķ����Ʊ����У��ж��ٸ�λ(bit)��ͬ���������� :1999 2299������� : 7 \n");
//	unsigned int x = 0; 
//	unsigned int y = 0; 
//	unsigned int z = 0; 
//	int n = 0;
//	scanf("%d%d", &x, &y);
//	z = x^y; //λ ��ͬΪ1
//	while (z) 
//	{
//		if (z % 2 == 1)
//		{
//			n++;
//		}
//		z /= 2;
//	}
//	printf("%d��%d�Ķ����Ʊ����У���%dλ��ͬ��\n", x, y, n);
//}

//#include <stdio.h>
//#define N 10
//int main()
//{
//	printf("��ӡ�������:\n");
//	int a[N][N] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < N; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (i = 2; i < N; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%2d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//#include <stdio.h>
//int main()
//{
//	int  murder = 0;
//	for (murder = 'A'; murder <= 'D'; murder++)
//	{
//		if ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D') == 3)
//		{
//			printf("murder is:%c\n", murder);//�������Ϊһ���ַ�
//		}
//	}
//	return 0;
//}


//5λ�˶�Ա����10��̨��ˮ����������������Ԥ��������Aѡ��˵��B�ڶ����ҵ�����Bѡ��˵���ҵڶ���E���ģ�Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����Eѡ��˵���ҵ��ģ�A��һ������������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
/*#include <stdio.h>
int main()
{

	return 0;
}
			*/

#include<stdio.h>
int main()
{
	int A = 0;
    int	B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((A == 3 || B == 2) && (B == 2 || E == 4) && (C == 1 || D == 2) && (D == 3 || C == 5) && (E == 4 || A == 1))
							printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
						
					}
				}
			}
		}
	}

	return 0;
}