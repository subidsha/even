#include<stdio.h>
int main()
{
	char n[100];
	int i,j,temp=0;
	scanf("%s",&n);
	for(i=0;n[i]!='\0';i++)
	{
	for(j=i+1;n[j]!='\0';j++)
	{
		if(n[i]>n[j])
		{
		temp=n[i];
		n[i]=n[j];
		n[j]=temp;
		}
	}
	}
	for(i=0;n[i]!='\0';i++)
            printf("%c",n[i]);
	return 0;
	}
