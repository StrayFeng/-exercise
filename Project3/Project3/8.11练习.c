 #define _CRT_SECURE_NO_WARNINGS
//���������Ͷ���
#include <stdio.h>
#include "add.h"

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Add(a, b);//�ӷ�
//	int rit = Sub(a, b);//����
//	printf("%d\n", ret);
//	printf("%d\n", rit);
//	return 0;
//}


//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺
//���룺1234����� 1 2 3 4.

//%d �Ǵ�ӡ�з��ŵ�����(����������)
//%u �Ǵ�ӡ�޷��ŵ�����
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);//1234
//	//1 2 3 4
//	//[4 3 2 1]
//	while (a)
//	{
//		printf("%d ", a % 10);
//		a = a / 10;
//	}
//	printf("%u\n", a);
//
//	return 0;
//}
// 
// 
//�ݹ��ʵ��
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//	return 0;
//}


//��д��������������ʱ���������ַ����ĳ��ȡ�

//���ַ����ĳ���
//ģ��ʵ��strlen
#include <string.h>
//int my_strlen(char str[])//��������д���������ʽ

//int my_strlen(char* str)//��������д��ָ�����ʽ
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ����
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//n�Ľ׳�
//�ݹ�ʵ��
//int fac(int i)
//{
//	if (i <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return i * fac(i - 1);
//	}
//}
//�����ķ�ʽ-�ǵݹ�
//int fac(int i)
//{
//	int n = 0;
//	int ret = 1;
//	for (n = 1; n <= i; n++)
//	{
//		ret = ret * n;
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fac(i);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//���n��쳲�������
//쳲���������
//1 1 2 3 5 8 13 21 34 55 ...
//�ݹ�ʵ��
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fib(i);
//	printf("%d\n", ret);
//	return 0;
//}


//void Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d\n", c);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Fib(i);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fib(i);
//	printf("%d\n", ret);
//	return 0;
//}


