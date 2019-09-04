#include <stdio.h>

//struct Stu
//{
//	char name[10];
//	short age;
//};
//int main()
//{
//	struct Stu s1 = { "张三",20 };
//	printf("%s %d", s1.name, s1.age);
//	return 0;
//}

//struct S
//{
//	int arr[1000];
//	int num;
//};
//
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
//int main()
//{
//	struct S s = { { 1, 2, 3, 4 }, 1000 };
//	print1(s);
//	return 0;
//}

//struct S
//{
//	int arr[1000];
//	int num;
//};
//
//void print1(struct S* s)
//{
//	printf("%d\n", s->num);
//}
//
//int main()
//{
//	struct S s = { { 1, 2, 3, 4 }, 1000 };
//	print1(&s);
//	return 0;
//}


//struct S3
//{
//	double d;  //8=8->8
//	char c;    //1<8->1
//	int i;     //4<8 ->4
//};             //16
//struct S4
//{
//	char c1;   //1<8 ->1
//	struct S3 s3;  // 8=8->8
//	double d;   //8=8->8
//};              //32
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}


//#include <stdio.h>
//#pragma pack(1)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//int check_sys()
//{
//	int i = 1;
//	if (1 == *(char*)&i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}

