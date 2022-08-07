 #define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
//int main()
//{
//	int n, i,j;
//	int num = 1;
//	int sum = 0;
//	printf("请输入一个数：");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		num = i * num;
//		sum += num;
// 
//	}
//	printf("%d\n",num);
//	printf("%d\n",sum);
//	return 0;
//}


int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 4;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到!\n");
	return 0;
}


//#include<string.h>
//int main()
//{
//	char arr1[] = "hello bit!!!!!";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

