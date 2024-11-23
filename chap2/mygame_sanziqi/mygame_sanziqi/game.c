# define _CRT_SECURE_NO_WARNINGS
# include "game.h"

void initialize_board(char board[ROW][COLUMN], int row, int column)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void print_board(char board[ROW][COLUMN], int row, int column)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < column; j++)
		{
			//ʹ��s�ᵼ��Խ�����, ֱ������\0, ʹ��d, ����Ĳ��ǵ����ַ�, ��������
			printf(" %c ", board[i][j]);
			if (j < column - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("-----------\n");
		}
	}
}

void play_input(char board[ROW][COLUMN], int row, int column)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������������ӵ�:>>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x < row + 1 && y > 0 && y < column + 1)
			break;
		else
			printf("�����������!\n");
	}
	board[x - 1][y - 1] = '*';
}

void computer_input(char board[ROW][COLUMN], int row, int column)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		srand((unsigned int)time(NULL));
		x = rand() % row;
		y = rand() % column;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			printf("��������:%d %d\n", x+1, y+1);
			break;
		}
	}
}

int board_check(char board[ROW][COLUMN], int row, int column)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < column; j++)
		{
			// �жϺ���
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] != ' ')
				return board[i][j];
			// �ж�����
			if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
			// �ж϶Խ���
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] != ' ')
				return board[i][j];
			if (board[i][j] == board[i - 1][j - 1] && board[i][j] == board[i - 2][j - 2] && board[i][j] != ' ')
				return board[i][j];
		}
		return 1;
	}
}

// ��ʼ������, ��������������̴�С�Ļ���
void game(char board[ROW][COLUMN], int row, int column) {
	// ��ʼ��initialize���������
	initialize_board(board, ROW, COLUMN);
	// ��ӡ����
	print_board(board, ROW, COLUMN);
	// ���жԾ�
	int count = 0;
	char ret = 1;
	int product = ROW * COLUMN;
	while (1)
	{
		// �������
		play_input(board, ROW, COLUMN);
		// ��ӡ����
		print_board(board, ROW, COLUMN);
		if (count >= row * column)
			break;
		// �ж���Ӯ
		ret = board_check(board, ROW, COLUMN);
		if (ret == '*')
		{
			printf("���Ӯ��\n");
			break;
		}
		// ͳ�ƴ���
		count++;
		if (count == product)
		{
			printf("ƽ��\n");
			break;
		}


		// ��������
		computer_input(board, ROW, COLUMN);
		// ��ӡ����
		print_board(board, ROW, COLUMN);
		// �ж���Ӯ
		ret = board_check(board, ROW, COLUMN);
		if (ret == '#')
		{
			printf("����Ӯ��\n");
			break;
		}
		// ͳ�ƴ���
		count++;
		if (count == product)
		{
			printf("ƽ��\n");
			break;
		}
	}

}