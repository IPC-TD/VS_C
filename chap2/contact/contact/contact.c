#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
// ���������ݵĹ����������򣬱�ģ��ֻ����ʵ�ֹ��ܣ��Լ�ǿ��ģ���ͨ����

//// ��ʼ��ͨѶ¼����̬�汾��
//void initialization_contact(struct Contact* con)
//{
//	assert(con);
//	// ��ʼ��������ϵ��
//	memset(con->data, 0, sizeof(con->data));
//	// ͨѶ¼��ϵ�˸���
//	con->count = 0;
//}

// ��ʼ��ͨѶ¼����̬�汾��
void initialization_contact(struct Contact* con)
{
	assert(con);
	// ��ʼ��������ϵ��
	con->data = (struct Peo*)calloc(DATA_INIT_MAK, sizeof(struct Peo));
	if (con == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}
	// ͨѶ¼��ϵ�˸���
	con->count = 0;
	// ��ǰͨѶ¼����
	con->max_count = DATA_INIT_MAK;
}

static void print_title(void)
{
	printf("����\t �Ա�\t ����\t �绰����\t ��ַ\n");
}

static void print_info(struct Contact* con, int i)
{
	printf("%s\t %s\t %d\t %s\t\t %s\n", con->data[i].name, con->data[i].gender, con->data[i].age, con->data[i].telephone, con->data[i].address);
}

// ��ʾͨѶ¼
void show_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}

	int i = 0;
	print_title();
	for (i = 0; i < con->count; i++)
	{
		print_info(con, i);
	}

}

// �û���Ϣ���ģ��
static void info_input(struct Contact* con, size_t num)
{
	printf("������������>");
	scanf("%s", con->data[num].name);
	printf("�������Ա�>");
	scanf("%s", con->data[num].gender);
	printf("���������䣺>");
	scanf("%d", &(con->data[num].age));
	printf("������绰��>");
	scanf("%s", con->data[num].telephone);
	printf("�������ַ��>");
	scanf("%s", con->data[num].address);
}

//// �����ϵ�ˣ���̬�汾��
//void add_contact(struct Contact* con)
//{
//	assert(con);
//	if (con->count == MAX)
//	{
//		printf("ͨѶ¼�������޷������ϵ��");
//		return;
//	}
//	printf("��ʼ�����ϵ�ˣ�\n");
//	info_input(con, con->count);
//	con->count++;
//}

// ͨѶ¼����
int data_increase(struct Contact* con, size_t _count)
{
	struct Peo* tmp = (struct Peo*)realloc(con->data, sizeof(struct Peo) * (con->max_count + INCREESE_NUM));
	if (tmp == NULL)
	{
		return -1;
	}
	else
	{
		con->data = tmp;
		
	}
	return 0;
}

// �����ϵ�ˣ���̬�汾��
void add_contact(struct Contact* con)
{
	assert(con);
	// �����ǰͨѶ¼������������
	if (con->count == con->max_count)
	{
		int tmp = data_increase(con, con->max_count);
		if (tmp == -1)
		{
			return;
		}
		con->max_count += INCREESE_NUM;
		printf("���ݳɹ���");
	}
	printf("��ʼ�����ϵ�ˣ�\n");
	info_input(con, con->count);
	con->count++;
}

// ɾ������
static void del_peo(struct Contact* p, int i, int size)
{
	assert(p);
	memmove(p->data + i, p->data + i + 1, (p->count - i - 1) * size);
}
// ɾ����ϵ��
void del_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ϵ�˿�ɾ��\n");
		return;
	}
	int i = 0;
	char input[NAME_MAX];
	printf("��������Ҫɾ������ϵ��������>");
	scanf("%s", input);
	int flag = 0;
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(input, con->data[i].name) == 0)
		{
			del_peo(con, i, sizeof(con->data[0]));
			con->count--;
			flag = 1;
			printf("�����ɹ�����ϵ��\"%s\"�Ѿ�ɾ��\n", input);
		}
	}
	if (flag == 0)
	{
		printf("�����ҵ���ϵ�˲�����!\n");
	}
}

// ������ϵ��
void find_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ϵ�˿ɲ���\n");
		return;
	}
	int i = 0;
	char input[NAME_MAX];
	printf("��������Ҫ��ѯ����ϵ��������>");
	scanf("%s", input);
	int flag = 0;
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(input, con->data[i].name) == 0)
		{
			flag = 1;
			printf("���ҳɹ���! ��ϵ����ϢΪ��\n");
			print_title();
			print_info(con, i);
		}
	}
	if (flag == 0)
	{
		printf("�����ҵ���ϵ�˲�����!\n");
	}
}

// �޸���ϵ��
void modify_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ϵ�˿��޸�\n");
		return;
	}
	int i = 0;
	char input[NAME_MAX];
	printf("��������Ҫ�޸ĵ���ϵ��������>");
	scanf("%s", input);
	int flag = 0;
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(input, con->data[i].name) == 0)
		{
			flag = 1;
			printf("��ǰ�ҵ�����Ϊ\"%s\"����ϵ����ϢΪ��\n", con->data[i].name);
			print_title();
			print_info(con, i);
			printf("���ʸ���ϵ���Ƿ��޸ģ����ش�1Ϊ�޸ģ��ش�0���޸ģ���>");
			int tmp = 0;
			scanf("%d", &tmp);
			if (tmp == 1)
			{
				printf("��ʼ�޸���ϵ����Ϣ��\n");
				info_input(con, i);
			}

		}
	}
	if (flag == 0)
	{
		printf("���޸ĵ���ϵ�˲�����!\n");
	}
}

// ������ģ��
int contact_cmp1(const void* p1, const void* p2)
{
	return strcmp(((struct Peo*)p1)->name, ((struct Peo*)p2)->name);
}
int contact_cmp2(const void* p1, const void* p2)
{
	return strcmp(((struct Peo*)p1)->gender, ((struct Peo*)p2)->gender);
}
int contact_cmp3(const void* p1, const void* p2)
{
	return ((struct Peo*)p1)->age - ((struct Peo*)p2)->age;
}
int contact_cmp4(const void* p1, const void* p2)
{
	return strcmp(((struct Peo*)p1)->address, ((struct Peo*)p2)->address);
}

// ����ͨѶ¼
void sort_contact(struct Contact* con)
{
	assert(con);
	if (con->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ϵ�˿�����\n");
		return;
	}
	else if (con->count == 1)
	{
		printf("����1����ϵ�ˣ���������\n");
		return;
	}
	int input;
	printf("������ʲô��ʽ����\n");
	printf("��ش�1.����������2.���Ա�����3.����������4.����ַ����\n");
	printf("����������ʽ��>");
	scanf("%d", &input);
	if (input == 1)
	{
		qsort(con->data, con->count, sizeof(con->data[0]), contact_cmp1);
		printf("����ɹ���\n");
	}
	else if (input == 2)
	{
		qsort(con->data, con->count, sizeof(con->data[0]), contact_cmp2);
		printf("����ɹ���\n");

	}
	else if (input == 3)
	{
		qsort(con->data, con->count, sizeof(con->data[0]), contact_cmp3);
		printf("����ɹ���\n");

	}
	else if (input == 4)
	{
		qsort(con->data, con->count, sizeof(con->data[0]), contact_cmp4);
		printf("����ɹ���\n");

	}
	else
		printf("�����������\n");
}
