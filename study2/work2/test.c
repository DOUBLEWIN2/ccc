#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.交换两个数值，引用了临时变量
//int main()
//{
//	int a, b, temp;
//	a = 20;
//	b = 10;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d  b=%d\n", a, b);
//		system("pause");
//	return 0;
//}
//2.不用临时变量，交换两个数值。
//int main()
//{
//	int a, b;
//	a = 20;
//	b = 30;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d  b=%d\n", a ,b );
//	system("pause");
//	return 0;
//}//第一种利用加减法赋值
//int main()
//{
//	int a = 20;
//	int b = 30;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d  b=%d\n", a, b);
//	system("pause");
//	return 0;
//}     //第二种方法按位异或，利用二进制码
//3.求10个整数中最大值
//int main()
//{
//	int i;
//	int a[10] = { 1,25,14,12,20,32,58,47,4,18 };
//	int max = a[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max <=a[i])
//			max = a[i];
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}
//4.将三个数从大到小输出
//int main()
//{
//	int a = 10, b = 9, c = 58,t=0;
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//    if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d  %d  %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//5.求两个数的最大公约数。
//int main()
//{
//	int a ,b ,t ,i;
//	scanf("a=%d b=%d", &a, &b);
//	for (i = 1; i <= a; i++)
//	{
//		if (a%i == 0)
//		{
//			t = a / i;// t为a从大到小的因数
//			if (b % t == 0)
//			{
//				printf("%d", t);
//				system("pause");
//				break;
//			}
//		}
//	}
//	return 0;
//}