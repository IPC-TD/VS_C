# define _CRT_SECURE_NO_WARNINGS
# include "game.h"

void menu()
{
	printf("--------------------------------\n");
	printf("---------请输入选择-------------\n");
	printf("---------1. 玩三子棋------------\n");
	printf("---------0. 退出游戏------------\n");
	printf("--------------------------------\n");

}

int main()
{
	int input = 0;
	do
	{
		//打印开始菜单
		menu();
		//让玩家输入选择
		printf("请输入你的选择:>>");
		scanf("%d", &input);
		//游戏实现模块
		if (input == 1) {
			char board[ROW][COLUMN] = { 0 };
			game(board, 3, 3);
			//printf("开始游戏\n");
		}
		else
		{
			if (input != 0)
				printf("你的输入有误!\n");
		}

	} while (input);

	printf("已退出程序\n");
	return 0;
}