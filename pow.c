#include <stdio.h>
#include<math.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(pow(2,i)==n)
	{
	printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;

}
}
