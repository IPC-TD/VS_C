# define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu(void)
{
	printf("******************************************************\n");
	printf("***********1. 显示通讯录     2.添加联系人   **********\n");
	printf("***********3. 查找联系人     4.删除联系人   **********\n");
	printf("***********0. 退出系统                      **********\n");
	printf("******************************************************\n");
	printf("******************************************************\n");
}
struct Contact con;

int main()
{
	initialization_contact(&con);

	int input;
	do {
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			show_contact(&con);
			break;
		case 2:
			add_contact(&con);
			break;
		case 3:
			break;
		case 4:
			del_contact(&con);
			break;
		case 0:
			printf("已经退出系统");
			break;
		default:
			printf("输入有误\n");
		}
		


	} while (input);
	return 0;
}