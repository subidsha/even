#include <stdio.h>
int main()
{
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("%d",i);
	sum=sum+i;
	}
	printf("\n%d",sum/a);
	return 0;
        
}
