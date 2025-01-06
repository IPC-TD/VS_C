# define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu(void)
{
	printf("******************************************************\n");
	printf("*********  1. ��ʾͨѶ¼     2.�����ϵ��   **********\n");
	printf("*********  3. ������ϵ��     4.ɾ����ϵ��   **********\n");
	printf("*********  5. �޸���ϵ��     6.����ͨѶ¼   **********\n");
	printf("*********  0. �˳�ϵͳ                      **********\n");
	printf("******************************************************\n");
}
enum Menu
{
	EXIT = 0,
	SHOW = 1,
	ADD = 2,
	FIND_CON = 3,
	DEL = 4,
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
//		printf("�����룺>");
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
//			printf("�Ѿ��˳�ϵͳ");
//			break;
//		default:
//			printf("��������\n");
//		}
//
//	} while (input);
//	return 0;
//}

// ʹ��ö�����Ż����룬ʹ�÷�֧�߼�������ֱ��
int main()
{
	struct Contact con;
	initialization_contact(&con);

	int input;
	do {
		menu();
		printf("�����룺>");
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
			printf("�Ѿ��˳�ϵͳ");
			break;
		default:
			printf("��������\n");
		}

	} while (input);
	return 0;
}