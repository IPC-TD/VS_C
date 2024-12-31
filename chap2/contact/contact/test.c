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
		case 1:
			show_contact(&con);
			break;
		case 2:
			add_contact(&con);
			break;
		case 3:
			find_contact(&con);
			break;
		case 4:
			del_contact(&con);
			break;
		case 5:
			modify_contact(&con);
			break;
		case 6:
			sort_contact(&con);
			break;
		case 0:
			printf("�Ѿ��˳�ϵͳ");
			break;
		default:
			printf("��������\n");
		}

	} while (input);
	return 0;
}