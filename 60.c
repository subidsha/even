#include <stdio.h>
int main()
{
	int i,s=0,f=1,n,a;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a=f+s;
		s=f;
		f=a;
	printf("%d\n",a);
	}
	return 0;
}
