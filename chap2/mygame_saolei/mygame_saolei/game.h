#pragma once
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define ROW 9+2
# define COLUMN 9+2
# define NUM_MINE 5
//# define ROWS ROW + 2 // ��������Ҳ��
//# define COLUMNS COLUMN + 2 

// ��ʼ�����̵Ĳ���
void initBoard(char mine[ROW][COLUMN], int row, int column, char set);

// ���ɵ���
void generateMine(char mine[ROW][COLUMN], int row, int column, int numMine);
// ��ӡ����
void printBoard(char show[ROW][COLUMN], int row, int column);
// �����ߵ�������
void DeveloperPrintBoard(char mine[ROW][COLUMN], int row, int column);

// �Ų���
int FindMine(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column);
// �Ծ���Ӯ�ж�
int isWin(char mine[ROW][COLUMN], char show[ROW][COLUMN], int row, int column);
