#define _CRT_SECURE_NO_WARNINGS 1
//用函数乘法口诀表
//#include <stdio.h>
//int times_tables(int m)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= m; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %d ", i, j, i*j);
//		}
//	printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	times_tables(n);
//	return 0;
//}


//交换两个数
//void swap(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d" , &a,&b);
//	swap(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}


//判断闰年
//#include <stdio.h>
//int is_ryear(int y)
//{
//	if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d",&year);
//	ret = is_ryear(year);
//	if (ret == 1)
//	{
//		printf("%d 是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 不是闰年\n", year);
//	}
//	return 0;
//}
//int is_sushu(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}   
//     } 
//	return 1;
//}
//#include <stdio.h>
//int main()
//{
//	    int num = 0;
//		scanf("%d", &num);
//		int ret = is_sushu(num);
//		if (ret == 1)
//		{
//			printf("%d是素数\n", num);
//		}
//		else
//		{
//			printf("%d不是素数\n", num);
//		}	
//	return 0;
//}


//#include <stdio.h>
//#include <memory.h>
//void Init(int a[], int s)
//{
//	printf("初始化数组是：");
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < s; i++)
//	{
//		a[i] = j;
//		j++;
//	}
//	for (i = 0; i < s; i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//}
//
//int reverse(int* a[], int s)
//{
//	int i = 0;
//	printf("逆置数组是：");
//	int left = 0;
//	int right = s - 1;
//	while (left < right)
//	{
//		int *tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//	for (i = 0; i < s; i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//}
//
//int empty(int* a[], int s)
//{
//	int i = 0;
//	printf("清空数组是：");
//    memset(a , 0 , s * sizeof(a[0]));
//	for (i = 0; i < s; i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//}

////int main()
////{
////	int arr[6] = { 0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	Init(arr, sz);
////	reverse(arr, sz);
////	empty(arr, sz);
////	return 0;
////}
