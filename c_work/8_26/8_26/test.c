

//������ʵ��
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//�ݹ�ʵ��
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

//ָ�����
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

//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* des, const char* src)
//{
//	char* ret = des;
//	assert(des != NULL);
//	assert(src != NULL);
//	//�ж�\0
//	while (*des++)
//	{
//		des++; //��Ҫ��\0����ȥ
//	}
//	//���п���
//	while ((*des++ = *src++))
//	{
//		; //��Ҫ��\0����ȥ
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
//		printf("����\n");
//	else if (ret < 0)
//		printf("С��\n");
//	else
//		printf("����\n");
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%s\n", ret);
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* des, const char* src,int count)
//{
//	char* ret = des;
//	assert(des && src);
//	while (count && (*des++ = *src++))  //�����ַ��� (����\0 )
//	{
//		count--;
//	}
//	if (count)                //Ŀ�����׷��0           
//	while (--count)   //����\0��Ҫ��������Ϊ--count
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


//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* des, char* src, int count)
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


#include <stdio.h>
#include <assert.h>
int my_strncmp(char* s1, char* s2, int n)
{
	int ret = 0;
	assert(s1 && s2);
	while ((*s1 == *s2) && n)
	{
	    s1++;
		s2++;
		n--;
	} 
	return ret = *s1 - *s2;
}

int main()
{
	char str1[] = "abcef";
	char str2[] = "abcdg";
	int ret = my_strncmp(str1, str2,3);
	if (ret > 0)
		printf("����\n");
	else if (ret < 0)
		printf("С��\n");
	else
		printf("����\n");
	return 0;
}