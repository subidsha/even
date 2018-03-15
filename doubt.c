#include <stdio.h>
#include<string.h>
int main(void)
{
	int i,l;
	char s[100];
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(i==0)
		{
		s[0]=toupper(s[0]);
		}
		if(s[i]==' ')
		{
		s[i+1]=toupper(s[i+1]);
		}
	}
	printf("%s",s);
	return 0;
}
