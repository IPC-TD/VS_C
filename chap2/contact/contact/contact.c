#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
// 决定将数据的管理交给主程序，本模块只负责实现功能，以加强本模块的通用性

void initialization_contact(struct Contact* con)
{
	assert(con);
	// 初始化所有联系人
	memset(con->data, 0, sizeof(con->data));
	// 通讯录联系人个数
	con->count = 0;
}

void show_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("联系人为空\n");
		return;
	}

	int i = 0;
	printf("姓名\t性别\t年龄\t地址\n");
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
		printf("通讯录已满，无法添加联系人");
		return;
	}
	printf("开始添加联系人！\n");
	printf("请输入姓名：>");
	scanf("%s", con->data[con->count].name);
	printf("请输入性别：>");
	scanf("%s", con->data[con->count].gender);
	printf("请输入年龄：>");
	scanf("%d", &(con->data[con->count].age));
	printf("请输入地址：>");
	scanf("%s", con->data[con->count].address);
	con->count++;
}

void del_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("通讯录为空，无法联系人可删除");
		return;
	}
	int i = 0;
	char input[NAME_MAX];
	printf("请输入你要删除的联系人姓名：>");
	scanf("%s", input);
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(input, con->data[i].name) == 0)
		{
			del_peo(con, i, )
		}
	}
}



