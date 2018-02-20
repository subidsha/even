#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d\t%d",&a,&b);
	while(a!=0)
	{
		b=a%10;
		printf("%d",b);
		a=a/10;
	}
	return 0;
}
