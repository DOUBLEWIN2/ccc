///2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int binary_search(int arr[],int left, int right,int k)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = 1 + mid;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//    return -1;
//}
//int main()
//{
//	int arr[] = { 1 ,2, 5, 8, 9, 10, 15, 16, 17, 18 };
//	int left = 0;
//	int right = sizeof (arr) / sizeof (arr[0]) - 1;
//	int k, ret;
//	scanf("%d", &k);
//	ret = binary_search(arr, left, right, k);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//3.编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	char password[7] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 3;i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp("liyiyi", password) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i > 3)
//	{
//		printf("密码输错三次,退出程序\n");
//	}
//	system("pause");
//	return 0; 
//}


//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	while (1)
	{
		scanf("%c", &ch);
		ch = (int)ch;
		if (ch >= 65 && ch < 97)
		{
			ch += 32;
			printf("%c\n", ch);
		}
		else if (ch >= 97 && ch <= 128)
		{
			ch -= 32;
			printf("%c\n", ch);
		}
	}
	system("pause");
	return 0;
}



