#include<stdio.h>
int main()
{
	int m,hrs,min;
	scanf("%d",&m);
	hrs=m/60;
	min=m%60;
	printf("%d\t%d\n",hrs,min);
}
