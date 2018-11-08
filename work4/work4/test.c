#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.求出0~999之间的所有“水仙花数”并输出。
//int main()
//{
//	int m, n, q ,i ,sum;
//	for (i = 0; i <= 999; i++)
//	{
//		m = i / 100;
//		n = i % 100 / 10;
//		q = i % 10;        //分别求出百位，十位，个位上的数值。
//		sum = m*m*m + n*n*n + q*q*q;
//		if (sum == i)
//		{
//		   printf("%d  ", sum);
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.输出菱形图形。
//
int main()
{
	int row = 0, col = 0;
	for (row = 1; row <= 11;row++)
	{
		for (col = 1; col <= 11 - row; col++)
		{
			printf(" ");
		}
		for (col = 1; col <= 2 * row - 1; col++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (row = 10; row >=1; row--)
	{
		for (col = 11 - row; col >=1; col--)
		{
			printf(" ");
		}
		for (col = 2 * row - 1; col >= 1; col--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


//3.求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和.
//#include <math.h>
//int main()
//{
//	int a = 0, Sn = 0, i = 0, b = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		b += a * pow(10, i);//pow库函数是用于求次方，他的头文件是<math.h>
//		Sn += b ;
//	}
//	printf("%d\n", Sn);
//	system("pause");
//	return 0;
//}