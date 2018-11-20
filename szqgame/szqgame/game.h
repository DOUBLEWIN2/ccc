#ifndef _GAME_H_
#define _GAME_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROW 3          //定义屏幕上打印的棋盘是3*3
#define COL 3          

void game();

void InitBoard(char board[ROW][COL], int row, int col);
void playBoard(char board[ROW][COL], int row, int col);
void playmove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char win(char board[ROW][COL], int row, int col);
int full(char board[ROW][COL], int row, int col);


#endif