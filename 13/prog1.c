#include<stdio.h>
int fun(int a[], int n)
{  int c[1000]={0}; /* ��������ÿ�����ĳ��ִ��� */
   int t[1000]; /* ȥ���ظ��������ϵ�� */
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
   /* ���ڴ˴������Ҫ�Ĵ��룬�ҳ���������� */
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
		printf("������������������ǣ�%d\n", lucky);
	else
		printf("��������û��������\n");
	lucky = fun(b,5);
	if(lucky > 0)
		printf("������������������ǣ�%d\n", lucky);
	else
		printf("��������û��������\n");
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

