#include<stdio.h>
int main()
{
	int n[100],i,j,temp,a;
	for(a=1;a<=10;a++)
	scanf("%d\t",&n[a]);
	for(i=1;i<=10;i++)
	{
	for(j=i+1;j<=10;j++)
	{
		if(n[i]<n[j])
		{
		temp=n[i];
		n[i]=n[j];
		n[j]=temp;
		}
	}
	}
	
	printf("\n the maximum number is %d" ,n[1]);
		return 0;

	}
	
