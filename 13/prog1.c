#include<stdio.h>
int fun(int a[], int n)
{  int c[1000]={0}; /* 计数器，每个数的出现次数 */
   int t[1000]; /* 去掉重复后的整数系列 */
   int k=0,i,j, lucky;
   for (i=0; i<n; i++)
   {
	    for (j=0;j<k;j++)
		   if (a[i] == t[j])
		   {
			   c[j]++;
			   break;
		   }
		if (j>=k)
	    {   t[k] = a[i];
		    c[k] = 1;
		    k++;
	    }	
   }
   lucky = -1;
   /* 请在此处填入必要的代码，找出最大幸运数 */
   for(i=0;i<k;i++)
   {
	   if(c[i]==t[i])
	   {
			if(c[i]>lucky) lucky=c[i];
		}
   }  
   
   return lucky;
}
main( )
{	void NONO();
	int a[]={1,3,3,3,2,2}, b[]={2,3,2,3,2},lucky;
	lucky = fun(a,6);
	if(lucky > 0)
		printf("此数组中最大幸运数是：%d\n", lucky);
	else
		printf("此数组中没有幸运数\n");
	lucky = fun(b,5);
	if(lucky > 0)
		printf("此数组中最大幸运数是：%d\n", lucky);
	else
		printf("此数组中没有幸运数\n");
	NONO();
}
void NONO()
{
  FILE *fp=fopen("in.dat", "r");
  FILE *fw=fopen("out.dat", "w");
  int a[5000];
  int cnt=0, m;

  while(!feof(fp)) fscanf(fp, "%d", &a[cnt++]);
  m = fun(a,cnt-1);
  fprintf(fw,"%d\n", m);
  fclose(fp); fclose(fw);
}

