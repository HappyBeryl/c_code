
//�˵���Ϣ�����֡����䡢�Ա𡢵绰��סַ
//����1000���˵���Ϣ
//
//������ϵ��
//ɾ��
//�޸�
//����
//��ʾ

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 25
#define DEFAULT_SZ 3



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

//ͨѶ¼�ṹ��
//typedef struct Contact
//{
//	PeoInfo date[MAX]; //�����ʵ���ݵĿռ�
//	int sz; //��¼¼����Ϣ����
//}Contact;

typedef struct Contact
{
	PeoInfo* date;
	int sz;
	int capacity; //����
}Contact;

void InitContact( Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void SearchContact(Contact* pcon);
void Modify(Contact* pcon);
void DestroyContact(Contact* pcon);
void SaveContact(Contact* pcon);
void LoadContact(Contact* pcon);


