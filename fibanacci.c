#include<stdio.h>
int main()
{
	int n,s=0,i,f=1,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=s+f;
                         s=f;
                         f=sum;
	
	printf("%d",sum);
	}
	return 0;
}
