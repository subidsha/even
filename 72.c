#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[100];
	int i,l,c=0;
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
            {
	printf("yes");
	break;
	}
	else
	{
	c++;
	}
	}
	if(c!=0)
	printf("no");
	return 0;
}
