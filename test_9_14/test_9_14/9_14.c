#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//��һ��
//void main()
//{
//	int a, b;
//	printf("��������������\n");
//	scanf("%4d%4d", &a, &b);
//	printf("����ǰΪ�� a=%d,b=%d\n", a,b);
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������Ϊ��a=%d,b=%d\n", a,b);
//
//}

//�ڶ���
//#include<stdio.h>
//int main()
//{
//    float r, c, s, a = 3.14;
//    printf("������԰�İ뾶��\n");
//    scanf("%f", &r);
//    if (r > 0)
//    {
//        c = 2 * a * r;
//        s = a * r * r;
//        printf("԰���ܳ�C=%.3f,���S=%.3f\n", c, s);
//    }
//    else
//    {
//        printf("�����������ʹ���,����������:\n");
//    }
//    return 0;
//}

//������
#include <stdio.h>

int main()
{
	short int a;
	scanf("%X", &a);
	printf("-%hX\n", -a);
	return 0;
}
