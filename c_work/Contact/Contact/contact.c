#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(Contact* pcon)
{
	assert(pcon);
	 pcon->sz = 0;
	 memset( pcon->date, 0, sizeof(pcon->date));
}

void AddContact(Contact* pcon)
{
	assert(pcon);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满，无法添加");
		return 0;
	}
	//录入信息
	printf("请输入名字:");
	scanf("%s", pcon->date[pcon->sz].name);
	printf("请输入年龄:");
	scanf("%d", &(pcon->date[pcon->sz].age));
	printf("请输入性别:");
	scanf("%s", &(pcon->date[pcon->sz].sex));
	printf("请输入电话:");
	scanf("%s", &(pcon->date[pcon->sz].tele));
	printf("请输入地址:");
	scanf("%s", &(pcon->date[pcon->sz].addr));
	pcon->sz++;
	printf("增加成功\n");
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n",
			pcon->date[i].name,
			pcon->date[i].age,
			pcon->date[i].sex,
			pcon->date[i].tele,
			pcon->date[i].addr);
	}
}


 int FindByName(Contact* pcon, char name[])
{
	assert(pcon);
	int i = 0; 
	for (i = 0; i < pcon->sz; i++)
	{
		if(0 == strcmp(pcon->date[i].name, name))
		return i;
	}
	//找不到
	return -1;
}

void DelContact(Contact* pcon)
{
	int i = 0;
	int pos = 0;
	char name[NAME_MAX] = { 0 };
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法删除。");
	}
	//删除
	printf("请输入要删除人的名字:");
	scanf("%s", name);
	//查找
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//移除
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->date[i] = pcon->date[i + 1];
	}
	pcon->sz--;
	printf("删除成功\n");
}

void SearchContact(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找人的名字:");
	scanf("%s", name);
	int ret = FindByName(pcon,name);
	if (ret == -1)
	{
		printf("不存在\n");
		return;
	}
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");
	printf("%15s\t%5d\t%5s\t%12s\t%20s\n",
				pcon->date[ret].name,
				pcon->date[ret].age,
				pcon->date[ret].sex,
				pcon->date[ret].tele,
				pcon->date[ret].addr);
}

void Modify(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char name[NAME_MAX] = { 0 };
	printf("请输入要修改人的名字:");
	scanf("%s", name);
	int ret = FindByName(pcon, name);
	if (ret == -1)
	{
		printf("不存在\n");
		return;
	}
	//录入信息
	printf("请输入名字:");
	scanf("%s", pcon->date[ret].name);
	printf("请输入年龄:");
	scanf("%d", &(pcon->date[ret].age));
	printf("请输入性别:");
	scanf("%s", &(pcon->date[ret].sex));
	printf("请输入电话:");
	scanf("%s", &(pcon->date[ret].tele));
	printf("请输入地址:");
	scanf("%s", &(pcon->date[ret].addr));
	printf("修改成功\n");
}
