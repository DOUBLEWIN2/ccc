//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i , n ;
//	int sum1 = 0, sum2 = 0, sum = 0;
//	scanf("%d", &n);  //从键盘输入一个数
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)  //判断奇偶
//		{
//			sum1 -= i;    //判断i为偶数相减
//		}
//		else
//			sum2 += i;  //判断i为奇数相加
//	}
//	sum = sum1 + sum2;
//	printf("%d\n", sum);
//	system("pause"); 
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>  //system的头文件
//#include <math.h>  //pow库函数的头文件是<math.h>,利用pow必须调用头文件
//int main()
//{
//	int a=2, i=0;
//	int sum = 0, sum1 = 0, sum2 = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1 += pow(a, i); //pow用来求a的次方
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
//	long long sum = 0;  //定义长整型sum
//	for (i = 1; i <= 10; i++)
//	{
//		sum += pow(i, i);  //计算i的i次方的和.
//	}
//	printf("%lld\n", sum);//lld表示输出的sum是长整型.
//	system("pause");
//	return 0;
//}



int main()
{
	int i = 0 , n;
	float sum = 0;
	scanf("%d", &n);//从键盘输入一个数
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1 /(float) (i*(i + 1));//强制转换将1/（i*(i+1)）转换为float型
	}
	printf("%f\n", sum);//输出的sum是浮点型，所以用%f
	system("pause");
	return 0;
}