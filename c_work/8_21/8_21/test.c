#define  _CRT_SECURE_NO_WARNINGS 1

//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//#include <stdio.h>
//#include <math.h>
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//sum += ((num>>i)&1 )* pow( 2,31-i);//库函数
//		sum += ((num >> i) & 1)*(1 << (31 - i));//二进制位运算
//	}
//	return sum;
//}
//
//int main()
//{
//	unsigned int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}

//unsigned int reverse_bit(unsigned int num)
//{
//	//00000000000000000000000000011001
//	int i = 0;
//	unsigned int ret = 0;
//	for(i=0; i<32; i++)
//	{
//		ret <<= 1;
//		ret |= ((num>>i)&1);
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}



//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。请找出这个数字。（使用位运算）
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int result = 0;
//	int arr[] = { 1, 2, 3, 4, 3, 2, 1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			result = arr[i] ^ arr[j];
//			if (result != 0)
//			{
//				break;
//			}
//		}
//	}
//	printf("%d\n", result);
//	return 0;
//}

//#include <stdio.h>
//int Find_Alone(int* arr,int sz)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i]; //arr[0] = arr[0]^a[i]
                            //5^4(0101^0100) = 1，1^4(0001^0100) = 5(0101)  一个数连续两次异或同一个数，这个数的值不变
//	}                      // 0^4(0000^0100 = 0100)  一个数异或0就是它本身。 a^a = 0
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find_Alone(arr, sz);
//	printf("%d\n", ret);
//	return 0;
//}

//不使用（a + b）/ 2这种方式，求两个数的平均值
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = (b - a)/2 + a;
//  //int avgerage = a+((b-a)>>1);
//	printf("%d\n", a);
//	return 0;
//}



//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;//00 00 00 01
////	char* pc = (char*)&i;
//	return (*(char*)&i);
//}
//int main()
//{
//	printf("判断当前机器的字节序:\n");
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。

//


//#include <assert.h>
//#include <stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char* left, char*right)
//{
//	assert(left && right);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse(char arr[])
//{
//	//1. 逆序整个字符串
//	int len = my_strlen(arr);
//	char *start = NULL;
//	char* end = arr;
//	reverse_string(arr, arr+len-1);
//	//2. 逆序每个单词
//	while(*end)
//	{
//		start = end;
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse_string(start, end-1);
//		if(*end != '\0')
//			end++;
//	}
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//void Move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left<right)
//	{
//		int tmp = 0;
//		while((left<right)&&(arr[left]%2==1))
//		{
//			left++;
//		}
//		while((left<right) && (arr[right]%2==0))
//		{
//			right--;
//		}
//		if(left<right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Move(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3//右上角一行里面最大的 一列里面最小的
//2 3 4//左下角一行里面最小的 一列里面最大的
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

//#include <stdio.h>
//void Find(int arr[3][3], int row, int col, int k)
//{
//	int x = 0;
//	int y = col-1;
//
//	while(y>=0 && x<=row-1)
//	{
//		if(arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			printf("找到了，下标是：%d %d\n",x,y);//还可以返回结构体变量
//          return;
//		}
//	}
//}
//
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	Find(arr, 3, 3, 7);
//	return 0;
//}



//void Find(int arr[3][3], int* prow, int* pcol, int k)
//{
//	int x = 0;
//	int y = *pcol-1;
//
//	while(y>=0 && x<=*prow-1)
//	{
//		if(arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*prow = x;
//			*pcol = y;
//			return;
//		}
//	}
//	*prow = -1;
//	*pcol = -1;
//}
//
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int row = 3;
//	int col = 3;
//	Find(arr, &row, &col, 7);//返回型变量
//	if(row == -1 && col==-1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d %d\n" ,row, col);
//	}
//	return 0;
//}
//





//课堂的
//#include <stdio.h>
//void menu()
//{
//	printf("*****   1.add    *********\n");
//	printf("*****   2.sub    *********\n");
//	printf("*****   2.mul    *********\n");
//	printf("*****   4.div    *********\n");
//}
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
//	return x*y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 1;
//	int ret = 0;
//	while (input)
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//		    ret = add(x, y);
//			break;
//		case 2:
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			break;
//		case 3:
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			break;
//		case 4:
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			break;
//		default:
//			printf("输入有误，重新输入");
//			break;
//		}
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}


//#include <stdio.h>
//void menu()
//{
//	printf("*****   1.add    *********\n");
//	printf("*****   2.sub    *********\n");
//	printf("*****   2.mul    *********\n");
//	printf("*****   4.div    *********\n");
//}
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
//	return x*y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void Calc(int(*pf)(int , int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//int main()
//{
//	int input = 1;
//	while (input)
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		default:
//			printf("输入有误，重新输入");
//			break;
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//void menu()
//{
//	printf("*****   1.add    *********\n");
//	printf("*****   2.sub    *********\n");
//	printf("*****   2.mul    *********\n");
//	printf("*****   4.div    *********\n");
//}
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
//	return x*y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div};//函数指针数组
//	while (input)
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数:>");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//		{
//			printf("输入有误\n");
//		}
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int com_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//void* 需强制类型转换
//
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 2, 1, 5, 3, 6, 7, 9, 0, 4, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_int);
//	print_arr(arr, sz);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//struct Stu
//{
//	char name[20];
//	short age;
//};
//
//int main()
//{
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 50 }, { "wangwu", 15 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i<width; i++)//每个字节依次交换
//	{
//		char tmp = *(buf1 + i);
//		*(buf1 + i) = *(buf2 + i);
//		*(buf2 + i) = tmp;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp) (const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i<sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j<sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + width*j, (char*)base + (j + 1)*width)>0)
//			{
//				Swap((char*)base + width*j, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 2, 1, 5, 3, 6, 7, 9, 0, 4, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}
//










