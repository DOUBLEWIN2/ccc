#define _CRT_SECURE_NO_WARNINGS 1
//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	���� 1��λ�� 
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



//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
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
	printf("�������λ:");
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
	printf("���ż��λ:");
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

//3. ���һ��������ÿһλ.
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

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//#include <stdio.h.>
//#include <stdlib.h>
//int dif_bits(int m, int n)
//{
//	int c = 0;
//	int count = 0;
//	c = m^n; //ͨ�����m��n,��ͬλΪ1,��ֵ����c
//	while (c)
//	{
//		if ((c & 1) == 1)   
//		{
//			c = c >> 1;
//			count++;       //��¼cÿһλΪ1��ֵ;
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

