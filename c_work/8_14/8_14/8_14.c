//#define  _CRT_SECURE_NO_WARNINGS
//猜数字游戏
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
//	//生成随机数 
//	//RAND_MAX-32767=65535/2(short能表示数字的最大值)
//	  /*  char(char能表示的最大值127)
//		11111111  255
//		01111111  127
//		10000000  128*/
//	int ret = 0;
//	int num = 0;
//    ret = rand()%100+1;//s生成100以内的随机数
//	//猜数字
//	while (1)
//	{
//		printf("请输入要猜的数字:>");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//设置一次随机数生成起点 time返回时间戳
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default :
//			printf("输入错误，请再次输入\n");
//			break;
//		}	
//	} while (input);
//	return 0;
//}

//在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（折半查找）
//#include <stdio.h>
//int find(int arr[], int j,int sz)
//{
//	int left = 0;
//	//int right = sizeof(arr) / sizeof(arr[0]); 传过来是地址，数组的地址4个字节 
//	int right = sz-1;
//	//int mid = (left + right) / 2;//特大数字不可取
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
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
//	}
//	return 0;
//}

//代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char password[] = "112233";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &password);
//		if (strcmp(password, "112233") == 0)
//		{
//			printf("成功登录\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("操作频繁，退出程序\n");
//	}
//	return 0;
//}


//编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)//end of file
//	{
//		printf("请输入字符：\n");
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
