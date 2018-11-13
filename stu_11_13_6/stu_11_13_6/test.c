#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#include <stdio.h>
//#include <stdlib.h>
//void mul_table(int num)
//{
//	int i, j;
//    int mul = 0;
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			  mul = i*j;
//			  printf("%d*%d=%d  ", i, j, mul);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	mul_table(num);
//	system("pause");
//	return 0;
//}

//2.使用函数实现两个数的交换。
//#include <stdio.h>
//#include <stdlib.h>
//void  swap(int a, int b)
//{
//	int temp = 0;
//	printf("a=%d  b=%d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d  b=%d\n", a, b);
//}
//int main()
//{
//	int a=0, b=0;
//	scanf("%d%d", &a, &b);
//	swap(a, b);
//	system("pause");
//	return 0;
//}

//3.实现一个函数判断year是不是润年。
//#include <stdio.h>
//#include <stdlib.h>
//void is_leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d是闰年",year);
//	}
//	else
//	{
//		printf("%d不是闰年",year);
//	}
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	is_leap_year(year);
//	system("pause");
//	return 0;
//}
//


//4.创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
#include <stdio.h>
#include <stdlib.h>
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
void empty(int arr[])
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		arr[i] = 0;
		printf("%d  ", arr[i]);
	}
}
void  reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int temp = 0, i = 0;
	while( left < right)
	{
			temp = arr[right];   //在这个循环实现对数组元素的交换.
			arr[right] = arr[left];
			arr[left] = temp;
			left++;
			right--;
	}
	for (i = 0; i < sz; i++)
	{                                      //打印逆置后的数组
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[5] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("初始化数组\n");
	init(arr,sz);
	printf("逆置数组元素\n");
	reverse(arr, sz);
	printf("清空数组\n");
	empty(arr);
	system("pause");
	return 0;
}

//5.实现一个函数，判断一个数是不是素数。
//#include <stdio.h>
//#include <stdlib.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//		{
//			return -1;
//		}
//	}
//	return n;
//}
//int main()
//{
//	int n, ret=0;
//	scanf("%d", &n);
//	ret=is_prime(n);
//	if (-1 == ret)
//	{
//		printf("%d不是素数",n);
//	}
//	else
//	{
//		printf("%d是素数", ret);
//	}
//	system("pause");
//	return 0;
//}
//
