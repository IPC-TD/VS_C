# define _CRT_SECURE_NO_WARNINGS
# include "game.h"

void menu()
{
	printf("--------------------------------\n");
	printf("---------������ѡ��-------------\n");
	printf("---------1. ��������------------\n");
	printf("---------0. �˳���Ϸ------------\n");
	printf("--------------------------------\n");

}

int main()
{
	int input = 0;
	do
	{
		//��ӡ��ʼ�˵�
		menu();
		//���������ѡ��
		printf("���������ѡ��:>>");
		scanf("%d", &input);
		//��Ϸʵ��ģ��
		if (input == 1) {
			char board[ROW][COLUMN] = { 0 };
			game(board, 3, 3);
			//printf("��ʼ��Ϸ\n");
		}
		else
		{
			if (input != 0)
				printf("�����������!\n");
		}

	} while (input);

	printf("���˳�����\n");
	return 0;
}