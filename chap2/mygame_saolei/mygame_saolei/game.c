# define _CRT_SECURE_NO_WARNINGS
# include "game.h"

// 初始化棋盘盘
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

// 生成地雷
void generateMine(char mine[ROW][COLUMN], int row, int column, int numMine)
{
	int i = 0;
	srand((unsigned int)time(NULL));
	int mineRow = 0;
	int mineColumn = 0;
	// 使用单while，用判断剩余需要设置的地雷数量是否为0也行
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
// 打印棋盘
void printBoard(char show[ROW][COLUMN], int row, int column)
{
	printf("=================扫雷游戏=====================\n");
	int i = 0;
	int j = 0;
	// 打印顶部数标行
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
	printf("=================扫雷游戏=====================\n");
}

// 开发者地雷棋盘
void DeveloperPrintBoard(char mine[ROW][COLUMN], int row, int column)
{
	printf("=================开发者视图=====================\n");
	int i = 0;
	int j = 0;
	// 打印顶部数标行
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
	printf("=================开发者视图=====================\n");
}

//// 玩家输入
//int playInput(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column)
//{
//	while (1)
//	{
//		// 玩家输入
//		int playRow = 0;
//		int playColumn = 0;
//		printf("请输入坐标位置：");
//		scanf("%d %d", &playRow, &playColumn);
//
//		if (playRow > 0 && playRow < row - 1 && playColumn > 0 && playColumn < column - 1)
//		{
//			if (show[playRow][playColumn] == '*')
//			{
//				// 计算周围的地雷数量
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
//				// 将地雷数量填充到玩家端
//				show[playRow][playColumn] = count;
//				// 跳出循环
//				break;
//			}
//			else
//			{
//				printf("该位置已经走过\n");
//			}
//		}
//		else if (playRow == 999 && playColumn == 999)
//			DeveloperPrintBoard(mine, row, column);
//		else
//			printf("输入坐标有误！\n");
//	}
//}

// 对局输赢判断
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
					return -1; // 输了
				}
			}
		}
	}
	if (count == (row - 2) * (column - 2) - NUM_MINE)
	{
		return 1; // 赢了
	}
	else
		return 0; // 继续
}

//// 周围地雷数量计算
//char countMine(char mine[ROW][COLUMN], int playRow, int playColumn)
//{
//	// 计算周围的地雷数量
//	char count = '0'; // 如果这里给int，后面回传时结果+'0'就可以转换成字符
//	int i = 0;
//	int j = 0;
//	for (i = playRow - 1; i <= playRow + 1; i++)
//	{
//		for (j = playColumn - 1; j <= playColumn + 1; j++)
//		{
//			if (mine[i][j] == '1')
//				count++; // 对ASCII码值进行++
//		}
//	}
//	return count;
//}

// 周围地雷数量计算（方式二）
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

// 无雷区域连续展开
void floodFill(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column, int x, int y)
{
	int i = 0;
	int j = 0;
	// 判断新扫雷点是否在框架内
	if (x > 0 && y > 0 && x < row - 1 && y < column - 1)
	{
		// 扫描该点位周围情况
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				// 如果周围点位在框架内，且未被扫过
				if (show[i][j] == '*' && i > 0 && j > 0 && i < row - 1 && j < column - 1)
				{
					// 如果该点位周围无雷
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

// 排查雷
int FindMine(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column)
{
	while (1)
	{
		// 玩家输入
		int playRow = 0;
		int playColumn = 0;
		printf("请输入坐标位置：");
		scanf("%d %d", &playRow, &playColumn);

		if (playRow > 0 && playRow < row - 1 && playColumn > 0 && playColumn < column - 1)
		{
			if (show[playRow][playColumn] == '*')
			{
				// 将地雷数量填充到玩家端
				show[playRow][playColumn] = countMine(mine, playRow, playColumn);
				if (show[playRow][playColumn] == '0')
				{
					show[playRow][playColumn] = ' ';
					// 遍历排雷
					floodFill(mine, show, ROW, COLUMN, playRow, playColumn);
				}
				// 跳出循环
				break;
			}
			else
			{
				printf("该位置已经走过\n");
			}
		}

		// 作弊代码
		else if (playRow == 999 && playColumn == 999)
			DeveloperPrintBoard(mine, row, column);

		// 插旗
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
				printf("无效插旗！\n");
		}
		else
			printf("输入坐标有误！\n");
	}
}


