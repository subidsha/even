#include<stdio.h>
int main()
{
	int n[5],i,sum=0;
	scanf("%d",&n);
	for(i=1;i<5;i++)
	scanf("\n%d",&n[i]);
	for(i=1;i<5;i++)
	{
		sum=sum+n[i];
	}
	printf("%d",sum);
	
	return 0;
}
