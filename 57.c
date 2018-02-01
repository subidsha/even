#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d\t%d",&a,&b);
	swap(a,b);
}
void swap(int a,int b)
{
	a^=b;
	b^=a;
	a^=b;
	printf("%d\t%d",a,b);
	return 0;
}
