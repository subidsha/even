#include <stdio.h>
int main()
{
	int n,k,i,a[10];
	scanf("%d\t%d",&n,&k);
	for(i=0;i<=n;i++)
	{
	scanf("\n%d\t",&a[i]);
	}
	printf("%d",a[k-1]);
	return 0;
}
