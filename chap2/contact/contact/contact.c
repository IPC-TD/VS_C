#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
// ���������ݵĹ����������򣬱�ģ��ֻ����ʵ�ֹ��ܣ��Լ�ǿ��ģ���ͨ����

void initialization_contact(struct Contact* con)
{
	assert(con);
	// ��ʼ��������ϵ��
	memset(con->data, 0, sizeof(con->data));
	// ͨѶ¼��ϵ�˸���
	con->count = 0;
}

void show_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("��ϵ��Ϊ��\n");
		return;
	}

	int i = 0;
	printf("����\t�Ա�\t����\t��ַ\n");
	for (i = 0; i < con->count; i++)
	{
		printf("%s\t%s\t%d\t%s\n", con->data[i].name, con->data[i].gender, con->data[i].age, con->data[i].address);
	}

}

void add_contact(struct Contact* con)
{
	assert(con);
	if (con->count == MAX)
	{
		printf("ͨѶ¼�������޷������ϵ��");
		return;
	}
	printf("��ʼ�����ϵ�ˣ�\n");
	printf("������������>");
	scanf("%s", con->data[con->count].name);
	printf("�������Ա�>");
	scanf("%s", con->data[con->count].gender);
	printf("���������䣺>");
	scanf("%d", &(con->data[con->count].age));
	printf("�������ַ��>");
	scanf("%s", con->data[con->count].address);
	con->count++;
}

void del_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ϵ�˿�ɾ��");
		return;
	}
	int i = 0;
	char input[NAME_MAX];
	printf("��������Ҫɾ������ϵ��������>");
	scanf("%s", input);
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(input, con->data[i].name) == 0)
		{
			del_peo(con, i, )
		}
	}
}



