#define _CRT_SECURE_NO_WARNINGS
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//#include <stdio.h>
//#include <string.h>
//int Is_Left_Move(char* str1, char* str2) //ABCDABCD �в��� BCDA
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


//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ��ҳ����������֣����ʵ�֡�
//#include <stdio.h>
//void find_two_diff_num(int* arr, int sz,int* p1,int* p2)
//{
//    1.���
//	int i = 0;
//	int tmp = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	2. �������Ľ��tmp�ж�����λ��һλΪ1
//	for (i = 0; i < 32; i++)
//	{
//		if((tmp >> i) & 1 == 1)
//		{
//			pos = arr[i];
//			break;
//		}
//	}
//	3.����
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
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֡�
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