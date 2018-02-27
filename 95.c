#include <stdio.h>
#include<math.h>
int main()
{
	int t,result;
	float p,r,si;
	scanf("%f\t%d\t%f",&p,&t,&r);
	si=((p*t*r)/100);
	result=floor(si);
	printf("%d",result);
	return 0;
}
