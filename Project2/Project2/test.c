//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i , n ;
//	int sum1 = 0, sum2 = 0, sum = 0;
//	scanf("%d", &n);  //�Ӽ�������һ����
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)  //�ж���ż
//		{
//			sum1 -= i;    //�ж�iΪż�����
//		}
//		else
//			sum2 += i;  //�ж�iΪ�������
//	}
//	sum = sum1 + sum2;
//	printf("%d\n", sum);
//	system("pause"); 
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>  //system��ͷ�ļ�
//#include <math.h>  //pow�⺯����ͷ�ļ���<math.h>,����pow�������ͷ�ļ�
//int main()
//{
//	int a=2, i=0;
//	int sum = 0, sum1 = 0, sum2 = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1 += pow(a, i); //pow������a�Ĵη�
//		}
//		else
//		{
//			sum2 -= pow(a, i);
//		}
//	}
//	sum = sum1 + sum2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	long long sum = 0;  //���峤����sum
//	for (i = 1; i <= 10; i++)
//	{
//		sum += pow(i, i);  //����i��i�η��ĺ�.
//	}
//	printf("%lld\n", sum);//lld��ʾ�����sum�ǳ�����.
//	system("pause");
//	return 0;
//}



int main()
{
	int i = 0 , n;
	float sum = 0;
	scanf("%d", &n);//�Ӽ�������һ����
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1 /(float) (i*(i + 1));//ǿ��ת����1/��i*(i+1)��ת��Ϊfloat��
	}
	printf("%f\n", sum);//�����sum�Ǹ����ͣ�������%f
	system("pause");
	return 0;
}