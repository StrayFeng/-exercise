 #define _CRT_SECURE_NO_WARNINGS
// #include<stdio.h>
//int main()
//{
//    printf("Hello Nowcoder��");
//    return 0;
//}
//
//KiKiѧ����printf����Ļ�����Ϣ���������һ��С�ɻ����������д����������С�ɻ���
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
//ţţ�ոճ������໴�����һ��ʼ��ֻ��ѧ˵�򵥵����֣������˵һ�������������̾���ѧ�ᡣ����һ��������������������
//#include<stdio.h>
//main()
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d", a);
//    return 0;
//}

//��˵����֮��ţţ��ʼ���Ը�������С��������һ������������������������
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
//	printf("��ȡ��ֵa,b,c:\n");
//	scanf("%d,%d,%d",&a,&b,&c);//ȡ��ַ���ô�˫����ֻ�����������
//	max=a;
//	if (max < b)
//		max = b;
//	if (max<c)
//		max = c;
//	printf("�ó����ֵΪ��%d\n",max);
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



