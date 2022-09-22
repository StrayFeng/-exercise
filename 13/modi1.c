#include  <stdio.h>
#include  <math.h>
int sushu(int n)  /* 此函数判断n是否为素数，是素数返回1，不是素数返回0  */
{
	int  k, i, flag;
	k = (int)sqrt((double)n);
	i = 2;
	flag = 1;
	while ((i <= k) && (flag == 1))
	{
		/**********found**********/
		if (n%i== 0)
			flag = 0;
		i = i + 1;
	}
	return flag;
}
int fun(int num)
{
	int n, rnum = 0;
	n = num;
	while (n > 0)
	{
		/**********found**********/
		rnum = rnum * 10 + n %10;
		/**********found**********/
		n = n / 10;
	}
	if (sushu(num) && sushu(rnum))
		return 1;
	else
		return 0;
}
main()
{
	int n;
	scanf("%d", &n);
	if (fun(n))
		printf("%d 是可逆素数\n", n);
	else
		printf("%d 不是可逆素数\n", n);
}
