#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//쳲�������:1 1 2 3 5 8 13...
//int fib(int n)
//{
//	if (n <= 2)                       //���õݹ���쳲�������
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
//�ǵݹ�ʵ��
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

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
///<1>.�ǵݹ����ַ�������
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
///<2>���õݹ����ַ�������.
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//int factorial(int n)     
//{
//	if (n <= 1 )
//	{
//		return 1;
//	}
//	else return n*factorial(n - 1);   //���õݹ���n�Ľ׳�
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
 //�ǵݹ�
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
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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