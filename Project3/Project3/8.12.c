 #define _CRT_SECURE_NO_WARNINGS
 #define N 10000
#include<stdio.h>
#include<math.h>
int isprime(int a)
{
	int i = 0;
	if (a == 1)
	{
		return 1;
	}
	for (i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int people[N][2] = { 0 };
	int n = 0;
	int k = 0;
	int i = 0;
	int j = 0;
	int a = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		people[a][0] = i + 1;
	}
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		scanf("%d", &a);
		if (people[a][0] == 0)
		{
			printf("%04d: Are you kidding?\n", a);
		}
		else if (people[a][1] == 1)
		{
			printf("%04d: Checked\n", a);
		}
		else if (people[a][0] == 1)
		{
			printf("%04d: Mystery Award\n", a);
			people[a][1] = 1;
		}
		else
		{
			if (isprime(people[a][0]))
			{
				printf("%04d: Minion\n", a);
				people[a][1] = 1;
			}
			else
			{
				printf("%04d: Chocolate\n", a);
				people[a][1] = 1;
			}
		}
	}
	return 0;
}