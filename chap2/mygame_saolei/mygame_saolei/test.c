# define _CRT_SECURE_NO_WARNINGS
# include "game.h"

void menu(void)
{
	printf("--------------------------------\n");
	printf("-------选择您的操作-------------\n");
	printf("-------1. 扫雷   0. 退出--------\n");
	printf("--------------------------------\n");
}
void game(void)
{
	// 创建数组存档布局数据
	char mine[ROW][COLUMN] = { 0 };
	char show[ROW][COLUMN] = { 0 };
	// 初始化数组（这两个函数功能一致，可以合并）
	initBoard(mine, ROW, COLUMN, '0');
	initBoard(show, ROW, COLUMN, '*');
	// 随机填充 NUM_MINE 个雷
	generateMine(mine, ROW, COLUMN, NUM_MINE);
	// 游戏实现部分
	// //输出棋盘
	printBoard(show, ROW, COLUMN);
	// 对局状态
	int start = 0;
	while (start != 1 && start != -1)
	{
		// 玩家输入+处理信息(验证）+ 改变棋盘
		FindMine(mine, show, ROW, COLUMN);
		// 判断输赢
		start = isWin(mine, show, ROW, COLUMN);
		// 输出棋盘
		printBoard(show, ROW, COLUMN);
		// 开发者地雷图
		// DeveloperPrintBoard(mine, ROW, COLUMN);

	}
	if (start == 1)
		printf("您赢了\n");
	else
		printf("您输了\n");

}
int main()
{
	int input = 0;
	do {
		
		menu();
		printf("请输入:>>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
			{
				// 可以不用大括号
				//printf("开始游戏\n");
				game();
				break;
				
			}
			case 0:
			{
				printf("程序已退出！\n");
				break;
			}
			default:
				printf("输入有误，请重新输入！\n");
		}
	} while (input);
	return 0;
}