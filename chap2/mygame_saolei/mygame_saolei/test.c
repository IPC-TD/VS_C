# define _CRT_SECURE_NO_WARNINGS
# include "game.h"

void menu(void)
{
	printf("--------------------------------\n");
	printf("-------ѡ�����Ĳ���-------------\n");
	printf("-------1. ɨ��   0. �˳�--------\n");
	printf("--------------------------------\n");
}
void game(void)
{
	// ��������浵��������
	char mine[ROW][COLUMN] = { 0 };
	char show[ROW][COLUMN] = { 0 };
	// ��ʼ�����飨��������������һ�£����Ժϲ���
	initBoard(mine, ROW, COLUMN, '0');
	initBoard(show, ROW, COLUMN, '*');
	// ������ NUM_MINE ����
	generateMine(mine, ROW, COLUMN, NUM_MINE);
	// ��Ϸʵ�ֲ���
	// //�������
	printBoard(show, ROW, COLUMN);
	// �Ծ�״̬
	int start = 0;
	while (start != 1 && start != -1)
	{
		// �������+������Ϣ(��֤��+ �ı�����
		FindMine(mine, show, ROW, COLUMN);
		// �ж���Ӯ
		start = isWin(mine, show, ROW, COLUMN);
		// �������
		printBoard(show, ROW, COLUMN);
		// �����ߵ���ͼ
		// DeveloperPrintBoard(mine, ROW, COLUMN);

	}
	if (start == 1)
		printf("��Ӯ��\n");
	else
		printf("������\n");

}
int main()
{
	int input = 0;
	do {
		
		menu();
		printf("������:>>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
			{
				// ���Բ��ô�����
				//printf("��ʼ��Ϸ\n");
				game();
				break;
				
			}
			case 0:
			{
				printf("�������˳���\n");
				break;
			}
			default:
				printf("�����������������룡\n");
		}
	} while (input);
	return 0;
}