#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char ret='0';
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);    //初始化棋盘
	playBoard(board, ROW, COL);    //打印棋盘
	do
	{
		printf("玩家走:>");
		playmove(board, ROW, COL);
		playBoard(board, ROW, COL);
		ret = win(board, ROW, COL);
		printf("电脑走:>\n");
		computermove(board, ROW, COL);
		playBoard(board, ROW, COL);
		ret = win(board, ROW, COL);
	} while (ret == ' ');
	if (ret == 'y')
	{
		printf("恭喜你,你赢了\n");
	}
	else if (ret == 'x')
	{
		printf("很遗憾,你输了\n");
	}
	else if (ret == 'q')
	{
		printf("平局\n");
	}
	playBoard(board, ROW, COL);
}
void InitBoard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col*sizeof(board[0][0]));  //利用memset库函数将棋盘初始化为空格;
}                                                     //memset的头文件为<string.h>
void playBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c| %c|%c\n", board[i][0], board[i][1], board[i][2]);
		//将第一行棋盘先打印  |  |   ,的格式,打印三行
		if (i < row - 1)//打印两行
		{
			printf("--|--|--\n");
		}
		//在打印第一行棋盘后补充--|--|--,打印两行
	}
}
void playmove(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	while (1)
    {
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row&&j >= 1 && j <= col)
			//定义i和j等于1为了让玩家可以明了的输入坐标
		{
			if (board[i-1][j-1] == ' ') 
				//真实坐标是0到2;判断玩家走的坐标是否被占用
			{
				board[i - 1][j - 1] = 'y';  //未被占用,玩家的棋放在坐标里
				break;
			}
			else
			{
				printf("坐标已被占用,请重新输入");
			}
		}
		else
		{
			printf("请重新输入");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	srand((unsigned)time(NULL));  //设置随机值, time头文件<time.h>
while (1)
	{
		i = rand()%row;   //产生随机行数0~2
		j = rand()%col;   //产生随机列数0~2
		if (board[i][j] == ' ')
		{
			board[i][j] = 'x';
			break;
		}
	}
}
char win(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][2] != ' '))
			//判断行是否有空格
			return board[i][0];
	}
	for (j = 0; j < col; j++)
	{
		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]) && (board[2][j] != ' '))
			//判断列是否有空格 
			return board[0][j];
	}
	if (((board[0][0] == board[1][1]) && (board[1][1]
		== board[2][2]) && (board[2][2] != ' '))||(board[2][0] 
		== board[1][1]) && (board[1][1] == board[0][2]) && (board[2][2] != ' '))
		//判断两条对角线是否有空格
	{
		return board[1][1];
	}
	if (full(board, ROW, COL))
	{
		return 'q';
	}
     return ' ';//如果上述都不满足,返回空格
}
int full(char board[ROW][COL], int row, int col)
//判断棋盘上的坐标是否满了
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				return 0;  //如果棋盘上每个坐标里面都有值,返回0;
			}
		}
	}
}