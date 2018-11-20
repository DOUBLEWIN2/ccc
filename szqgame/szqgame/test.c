#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()         //打印菜单
{
	printf("**************************\n");
	printf("*******   1.play   *******\n");
	printf("*******   0.exit   *******\n");
	printf("**************************\n");
}
void test()  
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
        case 1:
			  game();  //进行游戏
		      break;
	    case 0:
		      printf("退出游戏\n");
		      break;
	    default:
		      printf("选择错误,请重新选择:>\n");
		      break;
		}
	} while (input);
}
int main()
{
    test();
	system("pause");
	return 0;
}