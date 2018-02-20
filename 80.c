#include <stdio.h>
int main(void) 
{
	int n,a,s=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		s=(s*10)+a;
		n=n/10;
	} 
	  n=s;
	  while(n!=0) 
	  {
	  	a=n%10;
	           if(a%2!=0)
	            {
                	printf("%d\t",a);
	            }
	            n=n/10;
	  }         
	
	return 0;
}
