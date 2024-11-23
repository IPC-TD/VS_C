#pragma once
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define ROW 9+2
# define COLUMN 9+2
# define NUM_MINE 5
//# define ROWS ROW + 2 // 这样定义也行
//# define COLUMNS COLUMN + 2 

// 初始化棋盘的布局
void initBoard(char mine[ROW][COLUMN], int row, int column, char set);

// 生成地雷
void generateMine(char mine[ROW][COLUMN], int row, int column, int numMine);
// 打印棋盘
void printBoard(char show[ROW][COLUMN], int row, int column);
// 开发者地雷棋盘
void DeveloperPrintBoard(char mine[ROW][COLUMN], int row, int column);

// 排查雷
int FindMine(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column);
// 对局输赢判断
int isWin(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column);
