///2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//3.��д����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//int main()
//{
//	char password[7] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 3;i++)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp("liyiyi", password) == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i > 3)
//	{
//		printf("�����������,�˳�����\n");
//	}
//	system("pause");
//	return 0; 
//}


//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
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



