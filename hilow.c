#include<stdio.h>
int main()
{
	int n[10],i,j,temp,a;
	for(a=0;a<=5;a++)
	scanf("%d\t",&n[a]);
	for(i=0;i<=5;i++)
	{
	for(j=i+1;j<=5;j++)
	{
		if(n[i]<n[j])
		{
		temp=n[i];
		n[i]=n[j];
		n[j]=temp;
		}
	}
	}
	
	printf("\n the highest number is %d" ,n[0]);
	printf("\n the lowest number is %d",n[5]);
	return 0;
	}
