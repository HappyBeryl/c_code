#define  _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* p1 = (char*)&n;
//	int* p2 = &n;
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	return 0;
//}

//#include <stdio.h>
//print(int (*p)[5], int x, int y) //����ָ��
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", (*(p + i))[j]); //p[i]=*[p+i]
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6 , 7 };
//	print(arr, 3, 5);
//	return 0;
//}

//#include <stdio.h>
//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int(*pf)(int, int) = &ADD;
//	int ret = (*pf)(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//void menu()
//{
//	printf("***  1.add   2.sub  ***\n");
//	printf("***  3.mul   4.div  ***\n");
//	printf("***  0.exit       *****\n");
//}
//
//int add(int x,int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	while (1)
//	{
//		menu();
//		printf("��ѡ����\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case(1) :
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			break;
//		case(2) :
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			break;
//		case(3) :
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			break;
//		case(4) :
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			break;
//		case(0) :
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//	    }
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//#include <stdio.h>
//void menu()
//{
//	printf("***  1.add   2.sub  ***\n");
//	printf("***  3.mul   4.div  ***\n");
//	printf("***  0.exit       *****\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*p[5])(int,int)= { 0, add, sub, mul, div };
//	while (1)
//	{
//		menu();
//		printf("��ѡ����\n");
//		scanf("%d", &input);
//		if (input >= 0 && input <= 4)
//		{
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//		{
//			printf("��������\n");
//		}
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//int(*p)(int, int); //����ָ��
//int (*pArr[4])(int, int) //����ָ������
//int (*(*pfArr)[4])(int, int) = &pArr //ָ����ָ�������ָ��

//#include <stdio.h>
//void bullon_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1 ; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int sz = 0;
//	int arr[] = { 2, 3, 1, 4, 6, 5, 9, 7, 8, 0 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	bullon_sort(arr, sz);
//	Print(arr,sz);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h> 
//int int_tmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int sz = 0;
//	int arr[] = { 2, 3, 1, 4, 6, 5, 9, 7, 8, 0 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), int_tmp);
//	Print(arr,sz);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h> 
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	short age;
//};
//
//int name_tmp(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int main()
//{
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 45 }, { "wangwu", 18 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz, sizeof(arr[0]), name_tmp);
//}

#include <stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i<width; i++) //һ���ֽ�һ���ֽڽ���
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}

int int_tmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void bubble_qsort(void*base, int sz, int width,
	int(*cmp)(const void*e1, const void*e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz-1 ; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + width*j, (char*)base + width*(j+1))>0) //�жϵ�һ���͵ڶ����Ĵ�С��ϵ
			Swap((char*)base + width*j, (char*)base + (j + 1)*width, width);  //���н���
		}
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int sz = 0;
	int arr[] = { 2, 3, 1, 4, 6, 5, 9, 7, 8, 0 };
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(arr[0]), int_tmp); //����
	Print(arr,sz);
	return 0;
}

