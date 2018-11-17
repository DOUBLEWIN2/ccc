#define _CRT_SECURE_NO_WARNINGS 1
//1.写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	返回 1的位数 
//}
//#include <stdio.h>
//#include <stdlib.h>
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//			n = n >> 1;
//		}
//		else
//			n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}



//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
#include <stdio.h>
#include <stdlib.h>
void bits(int n)
{
	int i = 0;
	int arr[100] = { 0 };
	for (i = 0; i < 32; i+=2)
	{
		if ((n >> i) & 1 == 1)
		{
			arr[i + 1] = 1;
		}
		else
			arr[i+1] = 0;
	}
	printf("输出奇数位:");
	for (i = 31; i >=1; i-=2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 1; i < 32; i += 2)
	{
		if ((n >> i) & 1 == 1)
		{
			arr[i + 1] = 1;
		}
		else
			arr[i + 1] = 0;
	}
	printf("输出偶数位:");
	for (i = 31; i >=1; i -= 2)
	{
		printf("%d ", arr[i+1]);
	}
	printf("\n");

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	bits(n);
	system("pause");
	return 0;
}

//3. 输出一个整数的每一位.
//#include <stdio.h>
//#include <stdlib.h>
//void one_bits(int n)
//{
//	if (n != 0)
//	{
//		if ((n & 1) == 1)
//		{
//			n = n >> 1;
//			one_bits(n);
//			printf("%d", 1);
//		}
//		else
//		{
//			n = n >> 1;
//			one_bits(n);
//			printf("%d", 0);
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	one_bits(n);
//	system("pause");
//	return 0;
//}

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//#include <stdio.h.>
//#include <stdlib.h>
//int dif_bits(int m, int n)
//{
//	int c = 0;
//	int count = 0;
//	c = m^n; //通过异或m和n,不同位为1,将值赋给c
//	while (c)
//	{
//		if ((c & 1) == 1)   
//		{
//			c = c >> 1;
//			count++;       //记录c每一位为1的值;
//		}
//		else
//			c = c >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = 0;
//	ret = dif_bits(m, n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

