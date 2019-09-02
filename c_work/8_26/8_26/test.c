
//计数器实现
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//递归实现
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return  my_strlen(str + 1) + 1;
//	}
//}

//指针相减
//int my_strlen(char* str)
//{
//	char *p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy( char* des,const char* src)
//{
//	assert(des != NULL);
//	assert(src != NULL);
//	char* ret = des;
//	while ((*des++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	char str[] = "hello world";
//	char* ret = my_strcpy(arr, str);
//	printf("%s\n",(char*) ret);
//	return 0;
//}
//


//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* des, const char* src, size_t count)
//{
//	char* ret = des;
//	assert(des && src);
//	while (count && (*des++ = *src++))  //拷贝字符串 (拷贝\0 )
//	{
//		count--;
//	}
//	if (count)                //目标后面追加0           
//	while (--count)   //遇到\0就要结束所以为--count
//	{
//		*des++ = '\0';
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	char str[] = "hello world";
//	char* ret = my_strncpy(arr, str, 5);
//	printf("%s\n", ret);
//	return 0;
//}
//


//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* des, const char* src)
//{
//	char* ret = des;
//	assert(des != NULL);
//	assert(src != NULL);
//	//判断\0
//	while (*des++)
//	{
//		des++; //不要把\0传进去
//	}
//	//进行拷贝
//	while ((*des++ = *src++))
//	{
//		; //需要把\0传进去
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = "hello ";
//	char str[] = "world";
//	char* ret = my_strcat(arr, str);
//	printf("%s\n", ret);
//	return 0;
//}


//
//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* des, char* src, size_t count)
//{
//	char* ret = des;
//	assert(des && src);
//	while (*(++des))
//	{
//		;
//	}
//	while (count && (*des++ = *src++))
//	{
//		count--;
//	}
//	*des = '\0';
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "hello ";
//	char str2[5] = "world";
//	char* ret = my_strncat(str1,str2,3);
//	printf("%s\n", ret);
//	return 0;
//}



//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* arr,const char* str)
//{
//	int ret = 0;
//	assert(arr && str);
//	while (*arr == *str)
//	{
//	    arr++;
//	    str++;
//	} 
//	return ret = *arr - *str;
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	char str[] = "abce";
//	int ret = my_strcmp(arr, str);
//	if (ret > 0)
//		printf("大于\n");
//	else if (ret < 0)
//		printf("小于\n");
//	else
//		printf("等于\n");
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//int my_strncmp(char* s1, char* s2, size_t n) //一个字节一个字节的拷贝
//{
//	int ret = 0;
//	assert(s1 && s2);
//	while ((*s1 == *s2) && n)
//	{
//	    s1++;
//		s2++;
//		n--;
//	} 
//	return ret = *s1 - *s2;
//}
//
//int main()
//{
//	char str1[] = "abcef";
//	char str2[] = "abcdg";
//	int ret = my_strncmp(str1, str2,3);
//	if (ret > 0)
//		printf("大于\n");
//	else if (ret < 0)
//		printf("小于\n");
//	else
//		printf("等于\n");
//	return 0;
//}



//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	const char* p1 = s1;
//	const char* p2 = s2;
//	const char* start = p1;
//	if (*s2 == '\0')
//		return s1;
//	while (*start)
//	{
//		p2 = s2;
//		p1 = start;
//		while (*p1 == *p2 && *p1 && *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			 return (char*)start;
//		}
//		start++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char str1[] = "abbbcdef";
//	char str2 [] = "bbc";
//	char* ret = my_strstr(str1, str2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%s\n", ret);
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//void  my_strchr(char* arr, char ch)
//{
//	int len = strlen(arr);
//	int i = 0;
//	while (i < len)
//	{	if (ch == arr[i])
//		{
//		    printf("%c\n", ch);
//			break;
//		}
//	    i++;
//	}
//	if (i == len)
//	{
//		printf("找不到\n");
//	}
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	my_strchr(arr, 'a');
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while(count--)	
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//		//dest = (char*)dest+1;
//		//src = (char*)src+1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = {0};
//	int arr2[] = {1,2,3,4,5,6 };
//    my_memcpy(arr1, arr2, 20);
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//void* my_memmove(void* des, void* src, size_t count)
//{
//	assert(des && src);
//	if (src < des) //从后向前
//	{
//		while (count--)
//		{
//			*((char*)des+count) = *((char*)src+count);
//		}
//	}
//	else //从前向后
//	{
//		while (count--)
//		{
//			*((char*)des) = *((char*)(src));
//			((char*)des)++;
//			((char*)src)++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	my_memmove(arr+2, arr, 16);
//	return 0;
//}
//

#include <stdio.h>
void fly(int* arr, int k)
{
	int start = 0;
	int j = 0;
	for (j = 0; j < k; j++)
	{
		int i = 0;
		while (*arr)
		{
			start = arr[0];
			arr[i] = arr[i + 1];
		}
	}
	printf("%d", arr);
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	fly(arr, 3);
}