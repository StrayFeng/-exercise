 #define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
//int main()//ʱ��ת��
//{
//    int sec = 0;
//    int hou = 0;
//    int min = 0;
//    scanf("%d", &sec);
//    hou = sec / 3600;
//    min = (sec%3600)/60;
//    sec = sec%60;
//    printf("%d %d %d\n",hou,min,sec);
//    return 0;
//
//
//#include<stdio.h>//����ƽ���ɼ�
//    int main()
//    {
//        int a, b, c, d, e;
//        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//        double average = (a + b + c + d + e) / 5.0;
//        printf("%.1f\n", average);
//        return 0;
//    }


int main()//�������һ����λ��
{
    int a, b, c, d;
    int num;
    scanf("%d", &num);
    a = num / 1000;
    b = (num / 100) % 10;
    c = (num / 10) % 10;
    d = num % 10;
    printf("%d %d %d %d\n", d, c, b, a);
    return 0;
}