#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//��һ��
//int main()
//{
//	double a, b, c;
//	double x1, x2, p;
//	printf("������a,b,c:");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	p = b * b - 4 * a * c;
//	if (p<0)
//	{
//		printf("������ʵ����\n");
//		return 0;
//	}
//	else if (p==0)
//	{
//		x1 = x2 = (-b) / (a * a);
//		printf("����������ͬΪ��\n");
//	}
//	else
//	{
//        x1 = (-b + sqrt(p)) / (2 * a);
//	    x2 = (-b - sqrt(p)) / (2 * a);
//		printf("����������ͬΪ��\n");
//	}
//	
//	printf("x1=%f,x2=%f\n", x1, x2);
//	return 0;
//}
//�ڶ���
//int main()
//{
//	char ch1,ch2,ch3;
//	printf("����һ���ַ���");
//	scanf("%c", &ch1);
//	ch2 = ch1 - 1;
//	ch3 = ch1 + 1;
//	printf("ch2 = %c,ch2=%d \n",ch2,ch2);
//	printf("ch1 = %c,ch1=%d \n",ch1,ch1);
//	printf("ch3 = %c,ch3=%d \n",ch3,ch3);
//	return 0;
//}
//������

int main()
{
    double f, c;
    printf("���������¶�:");
    scanf("%lf", &f);
    c = (9 / 5) * (f + 32);
    printf("�����Ӧ�����¶�:%.2f\n", c);
    return 0;
}

