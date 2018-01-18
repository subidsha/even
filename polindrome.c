#include<stdio.h>
int main()
{
	int n, sum=0,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n/=10;
		
	}
	if(n==sum)
	{
	printf("%d the num is polindrome",sum);
	}
	else
	{
		printf("%d this is not polindrome",sum);
	}
}
