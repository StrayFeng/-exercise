#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//�Ƚ����������нϴ��
//int main()
//{
//	int man(int x, int y);//��max����
//	int a, b, c;          //����a��b��c			
//	scanf("%d,%d",&a,&b);//����a��b
//	c = max(a, b);		//����max���������õ���ֵ��ֵ��c
//	printf("max=%d\n", c);//���c
//	return 0;
//}
//int max(int x, int y)//����max���������ò�������Ϊ����
//{
//	int z;//�����±���z
//	if (x > y)z = x;//���x>y����x��ֵ��z
//	else
//	z = y;//����y��ֵ��z
//	return z;//(�ص�)��z��Ϊmaxֵ����������maxλ��
//}

//�������������������
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

//����abc���
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