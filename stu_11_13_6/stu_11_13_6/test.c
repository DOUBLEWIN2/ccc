#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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

//2.ʹ�ú���ʵ���������Ľ�����
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

//3.ʵ��һ�������ж�year�ǲ������ꡣ
//#include <stdio.h>
//#include <stdlib.h>
//void is_leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d������",year);
//	}
//	else
//	{
//		printf("%d��������",year);
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


//4.����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
			temp = arr[right];   //�����ѭ��ʵ�ֶ�����Ԫ�صĽ���.
			arr[right] = arr[left];
			arr[left] = temp;
			left++;
			right--;
	}
	for (i = 0; i < sz; i++)
	{                                      //��ӡ���ú������
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[5] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("��ʼ������\n");
	init(arr,sz);
	printf("��������Ԫ��\n");
	reverse(arr, sz);
	printf("�������\n");
	empty(arr);
	system("pause");
	return 0;
}

//5.ʵ��һ���������ж�һ�����ǲ���������
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
//		printf("%d��������",n);
//	}
//	else
//	{
//		printf("%d������", ret);
//	}
//	system("pause");
//	return 0;
//}
//
