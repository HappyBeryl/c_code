
//人的信息：名字、年龄、性别、电话、住址
//最多放1000个人的信息
//
//增加联系人
//删除
//修改
//查找
//显示

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 25


typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

//通讯录结构体
typedef struct Contact
{
	PeoInfo date[MAX]; //存放真实数据的空间
	int sz; //记录录入信息个数
}Contact;

void InitContact( Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void SearchContact(Contact* pcon);
void Modify(Contact* pcon);

