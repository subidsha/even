#include<stdio.h>
int main()
{
	int a,b,x,y;
	scanf("%d\t%d",&a,&b);
	a^=b;
	b^=a;
	a^=b;
	printf("%d\t%d",a,b);
	return 0;
}
