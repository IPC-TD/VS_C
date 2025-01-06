# define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu(void)
{
	printf("******************************************************\n");
	printf("*********  1. 添加联系人     2.删除联系人   **********\n");
	printf("*********  3. 显示通讯录     4.查找联系人   **********\n");
	printf("*********  5. 修改联系人     6.排序通讯录   **********\n");
	printf("*********  0. 退出系统                      **********\n");
	printf("******************************************************\n");
}
enum Menu
{
	EXIT = 0,
	ADD = 1,
	DEL = 2,
	SHOW = 3,
	FIND_CON = 4,
	MODIFY = 5,
	SORT_CON = 6
};

//int main()
//{
//	struct Contact con;
//	initialization_contact(&con);
//
//	int input;
//	do {
//		menu();
//		printf("请输入：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			show_contact(&con);
//			break;
//		case 2:
//			add_contact(&con);
//			break;
//		case 3:
//			find_contact(&con);
//			break;
//		case 4:
//			del_contact(&con);
//			break;
//		case 5:
//			modify_contact(&con);
//			break;
//		case 6:
//			sort_contact(&con);
//			break;
//		case 0:
//			printf("已经退出系统");
//			break;
//		default:
//			printf("输入有误\n");
//		}
//
//	} while (input);
//	return 0;
//}

// 使用枚举来优化代码，使用分支逻辑更清晰直观
int main()
{
	struct Contact con;
	initialization_contact(&con);

	int input;
	do {
		menu();
		printf("请输入：>");
		scanf("%d", &input);

		switch (input)
		{
		case SHOW:
			show_contact(&con);
			break;
		case ADD:
			add_contact(&con);
			break;
		case FIND_CON:
			find_contact(&con);
			break;
		case DEL:
			del_contact(&con);
			break;
		case MODIFY:
			modify_contact(&con);
			break;
		case SORT_CON:
			sort_contact(&con);
			break;
		case EXIT:
			printf("已经退出系统");
			free(con.data);
			con.data = NULL;
			break;
		default:
			printf("输入有误\n");
		}

	} while (input);
	return 0;
}