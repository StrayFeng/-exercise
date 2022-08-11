 #define _CRT_SECURE_NO_WARNINGS
//函数声明和定义
#include <stdio.h>
#include "add.h"

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Add(a, b);//加法
//	int rit = Sub(a, b);//减法
//	printf("%d\n", ret);
//	printf("%d\n", rit);
//	return 0;
//}


//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入：1234，输出 1 2 3 4.

//%d 是打印有符号的整数(会有正负数)
//%u 是打印无符号的整数
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
//递归的实现
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
//	print(num);//接受一个整型值（无符号），按照顺序打印它的每一位。
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串的长度。

//求字符串的长度
//模拟实现strlen
#include <string.h>
//int my_strlen(char str[])//参数部分写出数组的形式

//int my_strlen(char* str)//参数部分写出指针的形式
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归求解
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


//n的阶乘
//递归实现
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
//迭代的方式-非递归
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


//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ...
//递归实现
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


