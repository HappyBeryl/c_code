//#define  _CRT_SECURE_NO_WARNINGS
//��������Ϸ
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("************\n");
//	printf("***1.play***\n");
//	printf("***0.exit***\n");
//	printf("************\n");
//}
//
//void game()
//{
//	//��������� 
//	//RAND_MAX-32767=65535/2(short�ܱ�ʾ���ֵ����ֵ)
//	  /*  char(char�ܱ�ʾ�����ֵ127)
//		11111111  255
//		01111111  127
//		10000000  128*/
//	int ret = 0;
//	int num = 0;
//    ret = rand()%100+1;//s����100���ڵ������
//	//������
//	while (1)
//	{
//		printf("������Ҫ�µ�����:>");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//����һ�������������� time����ʱ���
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default :
//			printf("����������ٴ�����\n");
//			break;
//		}	
//	} while (input);
//	return 0;
//}

//���������������в�����Ҫ�����֣� �ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//#include <stdio.h>
//int find(int arr[], int j,int sz)
//{
//	int left = 0;
//	//int right = sizeof(arr) / sizeof(arr[0]); �������ǵ�ַ������ĵ�ַ4���ֽ� 
//	int right = sz-1;
//	//int mid = (left + right) / 2;//�ش����ֲ���ȡ
//	int mid = left + (right - left ) / 2;
//	while (left <= right)
//	{
//		if (arr[mid] < j)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > j)
//			right = right - 1;
//		else
//		{
//			return mid;
//		}
//		return -1;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0, 1, 2, 3, 8, 5, 6, 7, 4, 9 };
//	int sz = 0;
//    sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &i);
//	int ret = find(arr,i,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
//	}
//	return 0;
//}

//����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char password[] = "112233";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", &password);
//		if (strcmp(password, "112233") == 0)
//		{
//			printf("�ɹ���¼\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����Ƶ�����˳�����\n");
//	}
//	return 0;
//}


//��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)//end of file
//	{
//		printf("�������ַ���\n");
//		if ('A' <= ch && ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if ('a' <= ch && ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if ('0' <= ch && ch <= '9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}
//	

#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)//end of file
	{
		if (isupper(ch))
		{
			putchar(tolower(ch));
		}
		else if (islower(ch))
		{
			putchar(toupper(ch));
		}
		else if (isdigit(ch))
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	return 0;
}
