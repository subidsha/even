#include<stdio.h>
int main()
{
	int n=1,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
	c++;
	}
	}
	if(c!=2)
	{
		printf("composite",i);
	}
	else
	{
		printf("not composite");
	}
	return 0;
}
