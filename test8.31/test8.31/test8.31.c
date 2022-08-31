#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//比较两个整数中较大的
//int main()
//{
//	int man(int x, int y);//对max声明
//	int a, b, c;          //定义a，b，c			
//	scanf("%d,%d",&a,&b);//输入a，b
//	c = max(a, b);		//调用max函数，将得到的值赋值给c
//	printf("max=%d\n", c);//输出c
//	return 0;
//}
//int max(int x, int y)//定义max函数，设置参数类型为整形
//{
//	int z;//定义新变量z
//	if (x > y)z = x;//如果x>y，将x赋值与z
//	else
//	z = y;//否则将y赋值与z
//	return z;//(重点)将z作为max值返回主函数max位置
//}

//给出三角形三边求面积
//int main()
//{
//	double a, b, c,s, area;
//	a = 3.67;
//	b = 5.42;
//	c = 6.24;
//	s = (a + b + c) / 2;
//	area = sqrt(s * (s - a) * (s - c) * (s - c));
//	printf("a=%f\t b=%f\t c=%f\t",a, b, c);
//	printf("area=%f\n", area);
//	return 0;
//}

//输入abc求根
int main()
{
	double a, b, c, disc, x1, x2, p, q;
	scanf("%lf%lf%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;
	p = -b / (2.0 * a);
	q = sqrt(disc) / (2.0 * a);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%7.2f\n x2=%7.2f\n", x1, x2);

	return 0;
}