#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//第一题
//int main()
//{
//	double a, b, c;
//	double x1, x2, p;
//	printf("请输入a,b,c:");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	p = b * b - 4 * a * c;
//	if (p<0)
//	{
//		printf("函数无实根。\n");
//		return 0;
//	}
//	else if (p==0)
//	{
//		x1 = x2 = (-b) / (a * a);
//		printf("函数两根相同为：\n");
//	}
//	else
//	{
//        x1 = (-b + sqrt(p)) / (2 * a);
//	    x2 = (-b - sqrt(p)) / (2 * a);
//		printf("函数两根不同为：\n");
//	}
//	
//	printf("x1=%f,x2=%f\n", x1, x2);
//	return 0;
//}
//第二题
//int main()
//{
//	char ch1,ch2,ch3;
//	printf("输入一个字符：");
//	scanf("%c", &ch1);
//	ch2 = ch1 - 1;
//	ch3 = ch1 + 1;
//	printf("ch2 = %c,ch2=%d \n",ch2,ch2);
//	printf("ch1 = %c,ch1=%d \n",ch1,ch1);
//	printf("ch3 = %c,ch3=%d \n",ch3,ch3);
//	return 0;
//}
//第三题

int main()
{
    double f, c;
    printf("输入摄氏温度:");
    scanf("%lf", &f);
    c = (9 / 5) * (f + 32);
    printf("输出对应华氏温度:%.2f\n", c);
    return 0;
}

