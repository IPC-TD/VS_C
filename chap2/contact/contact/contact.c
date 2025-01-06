#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
// 决定将数据的管理交给主程序，本模块只负责实现功能，以加强本模块的通用性

//// 初始化通讯录（静态版本）
//void initialization_contact(struct Contact* con)
//{
//	assert(con);
//	// 初始化所有联系人
//	memset(con->data, 0, sizeof(con->data));
//	// 通讯录联系人个数
//	con->count = 0;
//}

// 初始化通讯录（动态版本）
void initialization_contact(struct Contact* con)
{
	assert(con);
	// 初始化所有联系人
	con->data = (struct Peo*)calloc(DATA_INIT_MAK, sizeof(struct Peo));
	if (con == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}
	// 通讯录联系人个数
	con->count = 0;
	// 当前通讯录容量
	con->max_count = DATA_INIT_MAK;
}

static void print_title(void)
{
	printf("姓名\t 性别\t 年龄\t 电话号码\t 地址\n");
}

static void print_info(struct Contact* con, int i)
{
	printf("%s\t %s\t %d\t %s\t\t %s\n", con->data[i].name, con->data[i].gender, con->data[i].age, con->data[i].telephone, con->data[i].address);
}

// 显示通讯录
void show_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("通讯录为空\n");
		return;
	}

	int i = 0;
	print_title();
	for (i = 0; i < con->count; i++)
	{
		print_info(con, i);
	}

}

// 用户信息输出模块
static void info_input(struct Contact* con, size_t num)
{
	printf("请输入姓名：>");
	scanf("%s", con->data[num].name);
	printf("请输入性别：>");
	scanf("%s", con->data[num].gender);
	printf("请输入年龄：>");
	scanf("%d", &(con->data[num].age));
	printf("请输入电话：>");
	scanf("%s", con->data[num].telephone);
	printf("请输入地址：>");
	scanf("%s", con->data[num].address);
}

//// 添加联系人（静态版本）
//void add_contact(struct Contact* con)
//{
//	assert(con);
//	if (con->count == MAX)
//	{
//		printf("通讯录已满，无法添加联系人");
//		return;
//	}
//	printf("开始添加联系人！\n");
//	info_input(con, con->count);
//	con->count++;
//}

// 通讯录扩容
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

// 添加联系人（动态版本）
void add_contact(struct Contact* con)
{
	assert(con);
	// 如果当前通讯录已满，则扩容
	if (con->count == con->max_count)
	{
		int tmp = data_increase(con, con->max_count);
		if (tmp == -1)
		{
			return;
		}
		con->max_count += INCREESE_NUM;
		printf("扩容成功！");
	}
	printf("开始添加联系人！\n");
	info_input(con, con->count);
	con->count++;
}

// 删除功能
static void del_peo(struct Contact* p, int i, int size)
{
	assert(p);
	memmove(p->data + i, p->data + i + 1, (p->count - i - 1) * size);
}
// 删除联系人
void del_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("通讯录为空，无法联系人可删除\n");
		return;
	}
	int i = 0;
	char input[NAME_MAX];
	printf("请输入你要删除的联系人姓名：>");
	scanf("%s", input);
	int flag = 0;
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(input, con->data[i].name) == 0)
		{
			del_peo(con, i, sizeof(con->data[0]));
			con->count--;
			flag = 1;
			printf("操作成功，联系人\"%s\"已经删除\n", input);
		}
	}
	if (flag == 0)
	{
		printf("你所找的联系人不存在!\n");
	}
}

// 查找联系人
void find_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("通讯录为空，无联系人可查找\n");
		return;
	}
	int i = 0;
	char input[NAME_MAX];
	printf("请输入你要查询的联系人姓名：>");
	scanf("%s", input);
	int flag = 0;
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(input, con->data[i].name) == 0)
		{
			flag = 1;
			printf("查找成功该! 联系人信息为：\n");
			print_title();
			print_info(con, i);
		}
	}
	if (flag == 0)
	{
		printf("你所找的联系人不存在!\n");
	}
}

// 修改联系人
void modify_contact(struct Contact* con)
{
	assert(con);
	if (con->count <= 0)
	{
		printf("通讯录为空，无联系人可修改\n");
		return;
	}
	int i = 0;
	char input[NAME_MAX];
	printf("请输入你要修改的联系人姓名：>");
	scanf("%s", input);
	int flag = 0;
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(input, con->data[i].name) == 0)
		{
			flag = 1;
			printf("当前找到姓名为\"%s\"的联系人信息为：\n", con->data[i].name);
			print_title();
			print_info(con, i);
			printf("请问该联系人是否修改？（回答1为修改，回答0不修改）：>");
			int tmp = 0;
			scanf("%d", &tmp);
			if (tmp == 1)
			{
				printf("开始修改联系人信息：\n");
				info_input(con, i);
			}

		}
	}
	if (flag == 0)
	{
		printf("你修改的联系人不存在!\n");
	}
}

// 排序功能模块
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

// 排序通讯录
void sort_contact(struct Contact* con)
{
	assert(con);
	if (con->count == 0)
	{
		printf("通讯录为空，无联系人可排序\n");
		return;
	}
	else if (con->count == 1)
	{
		printf("仅有1个联系人，无需排序！\n");
		return;
	}
	int input;
	printf("请问以什么方式排序？\n");
	printf("请回答（1.按姓名排序，2.按性别排序，3.按年龄排序，4.按地址排序）\n");
	printf("请输入排序方式：>");
	scanf("%d", &input);
	if (input == 1)
	{
		qsort(con->data, con->count, sizeof(con->data[0]), contact_cmp1);
		printf("排序成功！\n");
	}
	else if (input == 2)
	{
		qsort(con->data, con->count, sizeof(con->data[0]), contact_cmp2);
		printf("排序成功！\n");

	}
	else if (input == 3)
	{
		qsort(con->data, con->count, sizeof(con->data[0]), contact_cmp3);
		printf("排序成功！\n");

	}
	else if (input == 4)
	{
		qsort(con->data, con->count, sizeof(con->data[0]), contact_cmp4);
		printf("排序成功！\n");

	}
	else
		printf("你的输入有误！\n");
}
