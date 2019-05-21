#include<stdio.h>

int main()
{
	int n,m,i,j,sum=0,c=0,l;
	scanf("%d %d",&n,&m);
	int a[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
    }
	
	for(i=1;i<=n;i++)
	{
       for(j=1;j<=i;j++)
       {
   	   sum=sum+a[i];
      }
      
      for(l=i+1;l<n;l++)
      {
      	sum=sum-m;
      	sum=sum+a[l];
      	if(sum>=0)
      	{
      	   	continue;
		}
		else
		{
			if(l<n)
			{
				c=c+1;
			}
			break;
		}
      	
	  }
	  if(c==0)
	  {
	  	printf("%d",j);
	  	break;
	  }
	}
printf("%d",c);
}
