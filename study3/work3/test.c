#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.将数组A和数组B中的内容进行交换（A和B一样大）：
//int main()
//{
//	int arr[10] = { 1, 5, 6, 9, 8, 7, 4, 7, 8, 52 };
//	int arr1[10] = { 7, 8, 7, 1, 5, 2, 45, 52, 45, 52,};
//	int i = 0, j = 0, t = 0;
//	for (i = 0; i < 10; i++)
//	{
//		t = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = t;      //交换数组的内容
//	}
//	for (j = 0; j < 10; j++)  
//	{
//		printf("%d  ", arr[j]);
//	}
//	printf("\n");
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d  ", arr1[j]);/*依次输出交换后数组的内容*/
//	}
//	system("pause");
//	return 0;
//}
//2.计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5... + 1 / 99 - 1 / 100的值。
int main()
{
	int i = 0;
	float sum1 = 0, sum2 = 0, sum = 0;
	for (i = 1; i < 100; i+=2)
	{
		sum1 += 1 / (float) i;
	}
	for (i = 2; i < 101; i+=2)
	{
		sum2 += 1 / (float) i;
	}
	sum = sum1 - sum2;
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
}
//3.编写程序数一下1到100的所有整数中出现多少次数字9.
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 9 == 0)
//		{
//			j += 1;
//		}
//	}
//	printf("%d", j);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i;
//	float sign, sum = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//		sign = (1 / (float)i - 1 / (float)(i + 1));
//		sum += sign;
//	
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}/*第2题的第二种方法 简单