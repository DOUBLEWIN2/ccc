#define _CRT_SECURE_NO_WARNINGS 1
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32;i++)    
//		//电脑有32个比特位,0~31
//	{
//		sum += (value & 1)* pow(2, 31 - i);
//		//value与1相与,判断最低位是否为1或0
//		//翻转后最低位与1相与后的值要成为最高位,所以幂从最高位开始
//		value = value >> 1;
//		//右移移位,无符号整数右移补0.
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int value = 0;
//	unsigned int ret = 0;
//	scanf("%u", &value);
//	//注意是无符号整型,所以用%u
//	ret = reverse_bit(value);
//	printf("%u", ret);
//	//注意是无符号整型,所以用%u,打印无符号
//	system("pause");
//	return 0;
//}


//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//#include <stdio.h>
//#include <stdlib.h>
//int average(int a, int b)
//{
//	return a + (b - a) / 2;
//}
//int main()
//{
//	int a, b, ret;
//	scanf("%d%d", &a, &b);
//	ret = average(a, b);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

//#include <stdio.h>
//#include <stdlib.h>
//int single(int arr[7])
//{
//	int i = 0;
//	while (i < 7)
//	{
//		if ((arr[i] & arr[i + 1]) != arr[i])
//		{
//			return arr[i];
//		}
//		else
//			i += 2;
//	}
//}
//int main()
//{
//	int arr[7] = { 1, 1, 2, 2, 3, 4, 4 };
//	int ret = 0;
//	ret = single(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
#include <stdio.h>
#include <stdlib.h>
int my_strlen(char *str)
//不使用库函数求字符长度
{
	int len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return len;
}
void reverse(char *left,char *right)
//逆置字符数组
{
	char temp = 0;
	while (left < right)
		//如果左边地址小于右边地址,进入循环,交换左右两边的值
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void str_reverse(char *str)
{
	
	
	int right =my_strlen(str);
	reverse(str, str + right - 1);
	//实参是首地址和末地址
	while (*str !='\0')
	{
		char *p = str;
		while ((*str != ' ')&&(*str != '\0'))
		{
			str++;
		}
		reverse(p, str-1);
		if (*str != '\0')
		{
			str++;
		}
	}
}
int main()
{
	char str[]= "student a am i";
	str_reverse(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}







