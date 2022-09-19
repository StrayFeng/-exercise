#include  <stdio.h>
#include  <string.h>
int fun(char s1[], char s2[])
{
	int n, m, mx = 0;
	int i, j, k;
	int left_n, left_m, left_num;
	n = strlen(s1);
	/**********found**********/
	m = strlen(s2);
	for (i = 0;i < n;i++)
	{
		for (j = 0; j < m;j++)
		{
			left_n = n - i;
			left_m = m - i;
			/**********found**********/
			left_num = left_n > left_m ?left_m:left_n;
			for (k = 0;k < left_num;k++)
			{
				if (s1[i + k] != s2[j + k])
					break;
			}
			/**********found**********/
			mx = k > mx ? k:mx;
		}
	}
	return mx;
}
main()
{
	char s1[100] = "qwertyuiop";
	char s2[100] = "asdrtyukl";
	int max;
	max = fun(s1, s2);
	printf("max=%d\n", max);
}
