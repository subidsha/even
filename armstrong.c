#include<stdio.h>
int main()
{
	int n,rem, i=0,a;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	while(a!=0)
	{
		rem=n%10;
		i+=rem*rem*rem;
		a/=10;
		
	}
	if(i==0)
		printf("\n armstrong",n);
		
	else
		printf("\n not armstrong",n);
}
