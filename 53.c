#include<stdio.h>
int main()
{
	int a,s,count=0;
	scanf("%d",&a);
	while(a!=0)
	{
		s=a%10;
		count=count+s;
		a=a/10;
	}
	printf("%d",count);
	return 0;
}
