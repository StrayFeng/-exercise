 #define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
////ӡ1-100֮
//int main()
//{
//	int n = 1;
//	while (n < 101)
//	{
//		if (n % 2 == 1)
//		{
//			printf("%d ", n);
//		}
//		n++;
//	}
//	return 0;
//}


//nĽ׳
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d ", ret);
//	return 0;
//}

int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		int ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d ", sum);
	return 0;
}