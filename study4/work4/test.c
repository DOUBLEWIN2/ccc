#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.���0~999֮������С�ˮ�ɻ������������
//int main()
//{
//	int m, n, q ,i ,sum;
//	for (i = 0; i <= 999; i++)
//	{
//		m = i / 100;
//		n = i % 100 / 10;
//		q = i % 10;        //�ֱ������λ��ʮλ����λ�ϵ���ֵ��
//		sum = m*m*m + n*n*n + q*q*q;
//		if (sum == i)
//		{
//		   printf("%d  ", sum);
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.�������ͼ�Ρ�
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


//3.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮��.
//#include <math.h>
//int main()
//{
//	int a = 0, Sn = 0, i = 0, b = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		b += a * pow(10, i);//pow�⺯����������η�������ͷ�ļ���<math.h>
//		Sn += b ;
//	}
//	printf("%d\n", Sn);
//	system("pause");
//	return 0;
//}