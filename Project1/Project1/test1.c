 #define _CRT_SECURE_NO_WARNINGS
// #include<stdio.h>
//int main()
//{
//    printf("Hello Nowcoder！");
//    return 0;
//}
//
//KiKi学会了printf在屏幕输出信息，他想输出一架小飞机。请帮他编写程序输出这架小飞机。
//#include<stdio.h>
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}
// 
//牛牛刚刚出生，嗷嗷待哺，一开始他只能学说简单的数字，你跟他说一个整数，他立刻就能学会。输入一个整数，输出这个整数。
//#include<stdio.h>
//main()
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d", a);
//    return 0;
//}

//会说整数之后，牛牛开始尝试浮点数（小数）输入一个浮点数，输出这个浮点数。
//#include<stdio.h>
//int main() {
//	float num = 0;
//	scanf("%f", &num);
//	printf("%.3f", num);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a,b,c,max;
//	printf("请取数值a,b,c:\n");
//	scanf("%d,%d,%d",&a,&b,&c);//取地址不用带双引号只有输入输出带
//	max=a;
//	if (max < b)
//		max = b;
//	if (max<c)
//		max = c;
//	printf("得出最大值为：%d\n",max);
//	return 0;
//}

# include <stdio.h>

int main()

{
	int a, b, c, max;
		printf("please input a,b,c:\n");

	scanf("%d,%d,%d", &a, &b, &c);

	max = a;

		if (max < b)

			max = b;

	if (max < c)

		max = c;

	printf("The largest number is %d\n", max);

	return 0;

}



