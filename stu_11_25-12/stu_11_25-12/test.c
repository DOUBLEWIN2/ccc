#define _CRT_SECURE_NO_WARNINGS 1
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
//		//������32������λ,0~31
//	{
//		sum += (value & 1)* pow(2, 31 - i);
//		//value��1����,�ж����λ�Ƿ�Ϊ1��0
//		//��ת�����λ��1������ֵҪ��Ϊ���λ,�����ݴ����λ��ʼ
//		value = value >> 1;
//		//������λ,�޷����������Ʋ�0.
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int value = 0;
//	unsigned int ret = 0;
//	scanf("%u", &value);
//	//ע�����޷�������,������%u
//	ret = reverse_bit(value);
//	printf("%u", ret);
//	//ע�����޷�������,������%u,��ӡ�޷���
//	system("pause");
//	return 0;
//}


//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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


//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

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
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
#include <stdio.h>
#include <stdlib.h>
int my_strlen(char *str)
//��ʹ�ÿ⺯�����ַ�����
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
//�����ַ�����
{
	char temp = 0;
	while (left < right)
		//�����ߵ�ַС���ұߵ�ַ,����ѭ��,�����������ߵ�ֵ
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
	//ʵ�����׵�ַ��ĩ��ַ
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







