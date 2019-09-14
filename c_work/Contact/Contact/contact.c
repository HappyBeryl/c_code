#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void Check_capacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//����
		PeoInfo* ptr = realloc(pcon->date, (pcon->capacity)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->date = ptr;
			pcon->capacity += 2;
			printf("���ݳɹ�\n");
		}
	}
}

void LoadContact(Contact* pcon)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("������Ϣ�����ļ�ʧ��\n");
			return;
	}
	//������Ϣ
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		Check_capacity(pcon);
		pcon->date[pcon->sz] = tmp;
		pcon->sz++;
	}
	fclose(pfRead);
	pfRead = NULL;
}


void InitContact(Contact* pcon)
{
	assert(pcon);
	 pcon->sz = 0;
	// memset( pcon->date, 0, sizeof(pcon->date));
	 pcon->date = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pcon->date == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
	//�����ļ�
	LoadContact(pcon);
}


void DestroyContact(Contact* pcon)
{
	free(pcon->date);
	pcon->date = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}

void AddContact(Contact* pcon)
{
	assert(pcon);
	Check_capacity(pcon);
	//if (pcon->sz == MAX)
	//{
    //   printf("ͨѶ¼�������޷����");
	//	return 0;
	//}
	//¼����Ϣ
	printf("����������:");
	scanf("%s", pcon->date[pcon->sz].name);
	printf("����������:");
	scanf("%d", &(pcon->date[pcon->sz].age));
	printf("�������Ա�:");
	scanf("%s", &(pcon->date[pcon->sz].sex));
	printf("������绰:");
	scanf("%s", &(pcon->date[pcon->sz].tele));
	printf("�������ַ:");
	scanf("%s", &(pcon->date[pcon->sz].addr));
	pcon->sz++;
	printf("���ӳɹ�\n");
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	//�Ҳ���
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
		printf("ͨѶ¼�ѿգ��޷�ɾ����");
	}
	//ɾ��
	printf("������Ҫɾ���˵�����:");
	scanf("%s", name);
	//����
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//�Ƴ�
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->date[i] = pcon->date[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�����˵�����:");
	scanf("%s", name);
	int ret = FindByName(pcon,name);
	if (ret == -1)
	{
		printf("������\n");
		return;
	}
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("������Ҫ�޸��˵�����:");
	scanf("%s", name);
	int ret = FindByName(pcon, name);
	if (ret == -1)
	{
		printf("������\n");
		return;
	}
	//¼����Ϣ
	printf("����������:");
	scanf("%s", pcon->date[ret].name);
	printf("����������:");
	scanf("%d", &(pcon->date[ret].age));
	printf("�������Ա�:");
	scanf("%s", &(pcon->date[ret].sex));
	printf("������绰:");
	scanf("%s", &(pcon->date[ret].tele));
	printf("�������ַ:");
	scanf("%s", &(pcon->date[ret].addr));
	printf("�޸ĳɹ�\n");
}

void SaveContact(Contact* pcon)
{
	int i = 0;
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("������Ϣ�����ļ�ʧ��\n");
	}
	//������Ϣ
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->date + i, sizeof(PeoInfo), 1, pfWrite);
	}
	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
}
