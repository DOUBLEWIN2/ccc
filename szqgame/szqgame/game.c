#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char ret='0';
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);    //��ʼ������
	playBoard(board, ROW, COL);    //��ӡ����
	do
	{
		printf("�����:>");
		playmove(board, ROW, COL);
		playBoard(board, ROW, COL);
		ret = win(board, ROW, COL);
		printf("������:>\n");
		computermove(board, ROW, COL);
		playBoard(board, ROW, COL);
		ret = win(board, ROW, COL);
	} while (ret == ' ');
	if (ret == 'y')
	{
		printf("��ϲ��,��Ӯ��\n");
	}
	else if (ret == 'x')
	{
		printf("���ź�,������\n");
	}
	else if (ret == 'q')
	{
		printf("ƽ��\n");
	}
	playBoard(board, ROW, COL);
}
void InitBoard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col*sizeof(board[0][0]));  //����memset�⺯�������̳�ʼ��Ϊ�ո�;
}                                                     //memset��ͷ�ļ�Ϊ<string.h>
void playBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c| %c|%c\n", board[i][0], board[i][1], board[i][2]);
		//����һ�������ȴ�ӡ  |  |   ,�ĸ�ʽ,��ӡ����
		if (i < row - 1)//��ӡ����
		{
			printf("--|--|--\n");
		}
		//�ڴ�ӡ��һ�����̺󲹳�--|--|--,��ӡ����
	}
}
void playmove(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	while (1)
    {
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row&&j >= 1 && j <= col)
			//����i��j����1Ϊ������ҿ������˵���������
		{
			if (board[i-1][j-1] == ' ') 
				//��ʵ������0��2;�ж�����ߵ������Ƿ�ռ��
			{
				board[i - 1][j - 1] = 'y';  //δ��ռ��,��ҵ������������
				break;
			}
			else
			{
				printf("�����ѱ�ռ��,����������");
			}
		}
		else
		{
			printf("����������");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	srand((unsigned)time(NULL));  //�������ֵ, timeͷ�ļ�<time.h>
while (1)
	{
		i = rand()%row;   //�����������0~2
		j = rand()%col;   //�����������0~2
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
			//�ж����Ƿ��пո�
			return board[i][0];
	}
	for (j = 0; j < col; j++)
	{
		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]) && (board[2][j] != ' '))
			//�ж����Ƿ��пո� 
			return board[0][j];
	}
	if (((board[0][0] == board[1][1]) && (board[1][1]
		== board[2][2]) && (board[2][2] != ' '))||(board[2][0] 
		== board[1][1]) && (board[1][1] == board[0][2]) && (board[2][2] != ' '))
		//�ж������Խ����Ƿ��пո�
	{
		return board[1][1];
	}
	if (full(board, ROW, COL))
	{
		return 'q';
	}
     return ' ';//���������������,���ؿո�
}
int full(char board[ROW][COL], int row, int col)
//�ж������ϵ������Ƿ�����
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				return 0;  //���������ÿ���������涼��ֵ,����0;
			}
		}
	}
}