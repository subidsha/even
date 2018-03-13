#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[100];
	int l,i,count=0;
	scanf("%[^\t\n]s",&s);
	l=strlen(s);
	for(i=0;i<=l;i++)
	{
	if(s[i]==' ')
	{
	count++;
	}
	}
	printf("%d",count);
	return 0;
	
}
