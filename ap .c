#include<stdio.h>
int main()
{
	int a=1,n=5,d=3,s,i,t,sum=0;
	for(i=a;i<=n;i++)
	{
	            s=a+(i-1)*d;
	            printf("%d \t",s);
	            sum=sum+s;
	}
		printf("\n %d",sum);
			return 0;
		
		
	
}
