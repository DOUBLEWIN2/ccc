#define _CRT_SECURE_NO_WARNINGS 1
//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for(b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1 )&& ((b == 2) +( e == 4)==1)
//							&&((c == 1) + ( d == 2) == 1) && ((c==5)+(d==3)==1)&&
//							((e==4)+(a==1)==1))
                          //判断a,b,c,d,e两句话只有一句话是正确的
//						if ((a*b*c*d*e == 120 )&& (a + b + c + d + e == 15))
//						{
//							printf("a=%d  b=%d  c=%d  d=%d  e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char killer;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if (((killer != 'a') + (killer == 'c') + (killer == 'd')
			+(killer != 'd'))==3)
		{
			printf("凶手是:%c\n", killer);
		}
	}
	system("pause");
	return 0;
}

//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	int i = 0, j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;  //输出第一列的元素
//		arr[i][i] = 1;  //输出对角线的元素
//	}
//	for (i = 2; i < n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];   //输出中间的元素
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}