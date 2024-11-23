# define _CRT_SECURE_NO_WARNINGS
# include "game.h"

// ��ʼ��������
void initBoard(char mine[ROW][COLUMN], int row, int column, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			mine[i][j] = set;
		}
	}
}

// ���ɵ���
void generateMine(char mine[ROW][COLUMN], int row, int column, int numMine)
{
	int i = 0;
	srand((unsigned int)time(NULL));
	int mineRow = 0;
	int mineColumn = 0;
	// ʹ�õ�while�����ж�ʣ����Ҫ���õĵ��������Ƿ�Ϊ0Ҳ��
	for (i = 0; i < numMine; i++)
	{
		while (1)
		{
			mineRow = (rand() % (row - 2)) + 1;
			mineColumn = (rand() % (column - 2)) + 1;
			if (mine[mineRow][mineColumn] == '0')
			{
				mine[mineRow][mineColumn] = '1';
				break;
			}
		}
	}
}
// ��ӡ����
void printBoard(char show[ROW][COLUMN], int row, int column)
{
	printf("=================ɨ����Ϸ=====================\n");
	int i = 0;
	int j = 0;
	// ��ӡ����������
	for (i = 0; i < row - 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i < row - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < column - 1; j++)
		{
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
	printf("=================ɨ����Ϸ=====================\n");
}

// �����ߵ�������
void DeveloperPrintBoard(char mine[ROW][COLUMN], int row, int column)
{
	printf("=================��������ͼ=====================\n");
	int i = 0;
	int j = 0;
	// ��ӡ����������
	for (i = 0; i < row - 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < column - 1; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
	printf("=================��������ͼ=====================\n");
}

//// �������
//int playInput(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column)
//{
//	while (1)
//	{
//		// �������
//		int playRow = 0;
//		int playColumn = 0;
//		printf("����������λ�ã�");
//		scanf("%d %d", &playRow, &playColumn);
//
//		if (playRow > 0 && playRow < row - 1 && playColumn > 0 && playColumn < column - 1)
//		{
//			if (show[playRow][playColumn] == '*')
//			{
//				// ������Χ�ĵ�������
//				char count = '0';
//				int i = 0;
//				int j = 0;
//				for (i = playRow - 1; i <= playRow + 1; i++)
//				{
//					for (j = playColumn - 1; j <= playColumn + 1; j++)
//					{
//						if (mine[i][j] == '1')
//							count++;
//					}
//				}
//				// ������������䵽��Ҷ�
//				show[playRow][playColumn] = count;
//				// ����ѭ��
//				break;
//			}
//			else
//			{
//				printf("��λ���Ѿ��߹�\n");
//			}
//		}
//		else if (playRow == 999 && playColumn == 999)
//			DeveloperPrintBoard(mine, row, column);
//		else
//			printf("������������\n");
//	}
//}

// �Ծ���Ӯ�ж�
int isWin(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i < row - 1; i++)
	{
		for (j = 1; j < column - 1; j++)
		{
			if (show[i][j] != '*')
			{
				count++;
				if (mine[i][j] == '1')
				{
					show[i][j] = 'M';
					return -1; // ����
				}
			}
		}
	}
	if (count == (row - 2) * (column - 2) - NUM_MINE)
	{
		return 1; // Ӯ��
	}
	else
		return 0; // ����
}

//// ��Χ������������
//char countMine(char mine[ROW][COLUMN], int playRow, int playColumn)
//{
//	// ������Χ�ĵ�������
//	char count = '0'; // ��������int������ش�ʱ���+'0'�Ϳ���ת�����ַ�
//	int i = 0;
//	int j = 0;
//	for (i = playRow - 1; i <= playRow + 1; i++)
//	{
//		for (j = playColumn - 1; j <= playColumn + 1; j++)
//		{
//			if (mine[i][j] == '1')
//				count++; // ��ASCII��ֵ����++
//		}
//	}
//	return count;
//}

// ��Χ�����������㣨��ʽ����
char countMine(char mine[ROW][COLUMN], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +

		mine[x - 1][y] +
		mine[x][y] +
		mine[x + 1][y] +

		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] - 8 * '0';
}

// ������������չ��
void floodFill(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column, int x, int y)
{
	int i = 0;
	int j = 0;
	// �ж���ɨ�׵��Ƿ��ڿ����
	if (x > 0 && y > 0 && x < row - 1 && y < column - 1)
	{
		// ɨ��õ�λ��Χ���
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				// �����Χ��λ�ڿ���ڣ���δ��ɨ��
				if (show[i][j] == '*' && i > 0 && j > 0 && i < row - 1 && j < column - 1)
				{
					// ����õ�λ��Χ����
					if (countMine(mine, i, j) == '0')
					{
						show[i][j] = ' ';
						floodFill(mine, show, ROW, COLUMN, i, j);
					}
					else
					{
						show[i][j] = countMine(mine, i, j);
					}
				}

			}
		}
	}
}

// �Ų���
int FindMine(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column)
{
	while (1)
	{
		// �������
		int playRow = 0;
		int playColumn = 0;
		printf("����������λ�ã�");
		scanf("%d %d", &playRow, &playColumn);

		if (playRow > 0 && playRow < row - 1 && playColumn > 0 && playColumn < column - 1)
		{
			if (show[playRow][playColumn] == '*')
			{
				// ������������䵽��Ҷ�
				show[playRow][playColumn] = countMine(mine, playRow, playColumn);
				if (show[playRow][playColumn] == '0')
				{
					show[playRow][playColumn] = ' ';
					// ��������
					floodFill(mine, show, ROW, COLUMN, playRow, playColumn);
				}
				// ����ѭ��
				break;
			}
			else
			{
				printf("��λ���Ѿ��߹�\n");
			}
		}

		// ���״���
		else if (playRow == 999 && playColumn == 999)
			DeveloperPrintBoard(mine, row, column);

		// ����
		else if (playRow < 0 && playRow > -(row - 1) && playColumn < 0 && playColumn > -(column - 1))
		{
			if (show[-playRow][-playColumn] == '*')
			{
				show[-playRow][-playColumn] = 'X';
				printBoard(show, ROW, COLUMN);
			}
			else if (show[-playRow][-playColumn] == 'X')
			{
				show[-playRow][-playColumn] = '*';
				printBoard(show, ROW, COLUMN);
			}
			else
				printf("��Ч���죡\n");
		}
		else
			printf("������������\n");
	}
}


