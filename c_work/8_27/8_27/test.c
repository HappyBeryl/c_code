#define _CRT_SECURE_NO_WARNINGS
//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include <stdio.h>
//#include <string.h>
//void left_move(char* arr, int k)
//{
//	int j = 0;
//	int len = strlen(arr);
//	for (j = 0; j < k; j++)
//	{
//		int i = 0;
//		int start = 0;
//		start = arr[0];
//		for (i = 0; i < len-1 ; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = start;
//	}
//}
//
//int main()
//{
//	int k = 0;
//	char arr[] = "ABCD";
//	left_move(arr, 3);
//	printf("%s\n", arr);
//	return 0;
//}
//
//
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//#include <stdio.h>
//#include <string.h>
//int Is_Left_Move(char* str1, char* str2) //ABCDABCD 中查找 BCDA
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1, len1);
//	if (strstr(str1, str2))
//		return 1;
//  else 
//      return 0;
//}
//
//int main()
//{
//	char arr[20] = "ABCD";
//	int ret = Is_Left_Move(arr, "CDAB");
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//
//


//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。找出这两个数字，编程实现。
//#include <stdio.h>
//void find_two_diff_num(int* arr, int sz,int* p1,int* p2)
//{
//    1.异或
//	int i = 0;
//	int tmp = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	2. 计算异或的结果tmp中二进制位哪一位为1
//	for (i = 0; i < 32; i++)
//	{
//		if((tmp >> i) & 1 == 1)
//		{
//			pos = arr[i];
//			break;
//		}
//	}
//	3.分组
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos)&1) == 1)
//		{
//			*p1 ^= arr[i];
//		}
//	}
//	*p2 = tmp^*p1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int num1 = 0;
//	int num2 = 0;
//	 101yihuo
//	 110
//	 011
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_two_diff_num(arr, sz, &num1, &num2);
//	printf("%d %d", num1, num2);
//	return 0;
//}
//
//
//
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。
//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//	assert(money != 0);
//	total = money * 2 - 1;
//	/*empty = money;
//	total += money;
//	while (empty >= 2 )
//	{
//		total += empty / 2;
//		empty = empty/2 + empty%2;
//	}*/
//	printf("total = %d", total);
//	return 0;
//}


#include <stdio.h>
#include <string.h>
void fly(char* arr, int k)
{
	int j = 0;
	int len = strlen(arr);
	for (j = 0; j < k; j++)
	{
		int start = 0;
		int i = 0;
		start = arr[0];
		for (i = 0; i < len - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[len - 1] = start;
	}
}

int main()
{
	char arr[] = "123456";
	fly(arr, 1);
	printf("%s", arr);
	return 0;
}