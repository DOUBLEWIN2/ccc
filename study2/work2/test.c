#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.����������ֵ����������ʱ����
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
//2.������ʱ����������������ֵ��
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
//}//��һ�����üӼ�����ֵ
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
//}     //�ڶ��ַ�����λ������ö�������
//3.��10�����������ֵ
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
//4.���������Ӵ�С���
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
//5.�������������Լ����
//int main()
//{
//	int a ,b ,t ,i;
//	scanf("a=%d b=%d", &a, &b);
//	for (i = 1; i <= a; i++)
//	{
//		if (a%i == 0)
//		{
//			t = a / i;// tΪa�Ӵ�С������
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