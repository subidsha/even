#include<stdio.h>
int main()
{
	int n,l,r;
	scanf("%d",&n);
	scanf("\n%d\t%d",&l,&r);
	if(n>l&&n<r)
	{
		printf("yes");
	}
	else
	{
		printf("no");
		
	}
	return 0;
	
}
