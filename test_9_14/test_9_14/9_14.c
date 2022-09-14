#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//第一题
//void main()
//{
//	int a, b;
//	printf("输入两个整数：\n");
//	scanf("%4d%4d", &a, &b);
//	printf("交换前为： a=%d,b=%d\n", a,b);
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后为：a=%d,b=%d\n", a,b);
//
//}

//第二题
//#include<stdio.h>
//int main()
//{
//    float r, c, s, a = 3.14;
//    printf("请输入园的半径：\n");
//    scanf("%f", &r);
//    if (r > 0)
//    {
//        c = 2 * a * r;
//        s = a * r * r;
//        printf("园的周长C=%.3f,面积S=%.3f\n", c, s);
//    }
//    else
//    {
//        printf("输入数据类型错误,请重新输入:\n");
//    }
//    return 0;
//}

//第三题
#include <stdio.h>

int main()
{
	short int a;
	scanf("%X", &a);
	printf("-%hX\n", -a);
	return 0;
}
