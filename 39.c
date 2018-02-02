#include<stdio.h>
int main()
{
	int a[100],i,j,temp,n;
	for(n=1;n<=10;n++)
	scanf("\n%d\t",&a[n]);
	for(i=1;i<=10;i++)
	{
	for(j=i+1;j<=10;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	printf("%d",a[1]);
	return 0;
}
