#include <stdio.h>
int main()
{
	int a,b,c=0,d;
	printf("\n enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
	}
	while(c!=0)
	{
		d=c%10;
		printf("%d ",d);
		c=c/10;
	}
	return 0;
}
