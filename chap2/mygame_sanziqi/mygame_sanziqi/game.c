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
			//使用s会导致越界访问, 直到遇到\0, 使用d, 输出的不是单个字符, 而是数字
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
		printf("请输入你的落子点:>>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x < row + 1 && y > 0 && y < column + 1)
			break;
		else
			printf("你的输入有误!\n");
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
			printf("电脑输入:%d %d\n", x+1, y+1);
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
			// 判断横行
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] != ' ')
				return board[i][j];
			// 判断竖行
			if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
			// 判断对角线
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] != ' ')
				return board[i][j];
			if (board[i][j] == board[i - 1][j - 1] && board[i][j] == board[i - 2][j - 2] && board[i][j] != ' ')
				return board[i][j];
		}
		return 1;
	}
}

// 初始化条件, 传入参数控制棋盘大小的绘制
void game(char board[ROW][COLUMN], int row, int column) {
	// 初始化initialize并输出棋盘
	initialize_board(board, ROW, COLUMN);
	// 打印棋盘
	print_board(board, ROW, COLUMN);
	// 进行对局
	int count = 0;
	char ret = 1;
	int product = ROW * COLUMN;
	while (1)
	{
		// 玩家输入
		play_input(board, ROW, COLUMN);
		// 打印棋盘
		print_board(board, ROW, COLUMN);
		if (count >= row * column)
			break;
		// 判断输赢
		ret = board_check(board, ROW, COLUMN);
		if (ret == '*')
		{
			printf("玩家赢了\n");
			break;
		}
		// 统计次数
		count++;
		if (count == product)
		{
			printf("平局\n");
			break;
		}


		// 电脑输入
		computer_input(board, ROW, COLUMN);
		// 打印棋盘
		print_board(board, ROW, COLUMN);
		// 判断输赢
		ret = board_check(board, ROW, COLUMN);
		if (ret == '#')
		{
			printf("电脑赢了\n");
			break;
		}
		// 统计次数
		count++;
		if (count == product)
		{
			printf("平局\n");
			break;
		}
	}

}