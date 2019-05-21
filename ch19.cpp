#include<stdio.h>

int main()
{
	int t,n,i,sum,j,k,c,d,r;
	scanf("%d",&t);
	while(t--)
	{
   scanf("%d",&n);
   int a[n];
   for(i=1;i<=n;i++)
   {
     scanf("%d",&a[i]);
   }
   r=0;
    for(i=2;i<n;i++)
    { c=0,d=0;
    	for(j=1;j<i;j++)
    	{
    		c=c+a[j];
		}
		for(k=i+1;k<=n;k++)
		{
			d=d+a[k];
			
		}
		if(c==d)
		{
			printf("__%d-%d",i,c);
			r=1;
		}
	
	}
	if(r==0)
	{
		printf("__0-0");
	}
	printf("\n");
	
   }
}
