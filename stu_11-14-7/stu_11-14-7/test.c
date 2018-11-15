#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.递归和非递归分别实现求第n个斐波那契数。
//斐波那契数:1 1 2 3 5 8 13...
//int fib(int n)
//{
//	if (n <= 2)                       //利用递归求斐波那契数
//	{
//		return 1;
//	}
//	else return (fib(n - 1) + fib(n - 2));
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//非递归实现
//int fib(int n)
//{
//	int pre = 0, next = 0;
//	int res = 0;
//	res = pre = 1;
//	while (n > 2)
//	{
//		n -= 1;
//		next = pre;
//		pre = res;
//		res = pre + next;
//	}
//	return res;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//2.编写一个函数实现n^k，使用递归实现
//int pow(int k,int n)
//{
//	if (k == 0)
//		return 1;
//	else return n*pow((k - 1), n);
//}
//int main()
//{
//	int k = 0, n = 0, ret = 0;
//	scanf("%d%d", &k,&n);
//	ret = pow(k, n);
//	printf("%d^%d=%d", n, k, ret);
//	system("pause");
//	return 0;
//}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else return (n % 10) + DigitSum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//void reverse_string(char *string)
//{
//	if (*string != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	printf("%c  ", *string);
//}
//int main()
//{   
//	char *string = "xyzabc";
//	reverse_string(string);
//	system("pause");
//	return 0;
//}
//5.递归和非递归分别实现strlen
///<1>.非递归求字符串长度
//int length(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (1)
//	{
//		if (arr[i] != '\0')
//		{
//			count++;
//			i++;
//		}
//		else
//			return count;
//	}
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = 0;
//	len = length(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
///<2>利用递归求字符串长度.
//int length(char *arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + length(arr + 1);
//	}
//}
//int main()
//{
//	char *arr = "abc";
//	int len = 0;
//	len = length(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//6.递归和非递归分别实现求n的阶乘
//int factorial(int n)     
//{
//	if (n <= 1 )
//	{
//		return 1;
//	}
//	else return n*factorial(n - 1);   //利用递归求n的阶乘
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
	/*ret = factorial(n);
	printf("%d", ret);
	system("pause");
	return 0;
}*/
 //非递归
//int factorical(int n)
//{
//	int i = 1;
//	int mul = 1;
//	for (; i <= n; i++)
//	{
//		mul = i*mul; 
//	}
//	return mul;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = factorical(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//7.递归方式实现打印一个整数的每一位
//void BIT(int n)
//{
//	if (n > 9)
//	{
//		 BIT(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{ 
//	int n = 0;
//	scanf("%d", &n);
//	BIT(n);
//	system("pause");
//	return 0;
//}
//