#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

	void menu()
	{
		printf("**************************\n");
		printf("*******   1. play  *******\n");
		printf("*******   0. exit  *******\n");
		printf("**************************\n");
	}

	void game()
	{
		int num = 0;
		int guess = 0;
		//1. ����һ�������
		//������������������
		num = rand() % 100 + 1;//1-100
		//printf("%d\n", num);
		//2. ������
		while (1)
		{
			printf("�������:>");
			scanf("%d", &guess);
			if (guess<num)
			{
				printf("��С��\n");
			}
			else if (guess > num)
			{
				printf("�´���\n");
			}
			else
			{
				printf("��ϲ��,�¶���\n");
				break;
			}
		}
	}


	int main()
	{
		int input = 0;
		//�ڴ�����ֻҪִ��һ�ξͿ���
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("��ѡ��:>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
			}
		} 
		while (input);
		return 0;
	}
 