#include<stdio.h>
int main()
{
	int n=1,k=10,i,c=0;
	scanf("%d %d",&n,&k);
	for(i=n;i<=k;i++)
	{
	if(i%2==0)
	{
	c++;
	}
	
	if(c==2)
	{
		printf("\n %d",i);
	}
	}
}
