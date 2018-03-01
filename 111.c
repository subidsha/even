#include<stdio.h>
int main()
{
	int n,count=0,sum;
	scanf("%d",&n);
	while(n!=0)
	{
		sum=n%10;
		count++;
		n=n/10;
	}
	printf("Number of digits %d",count);
	return 0;
}
