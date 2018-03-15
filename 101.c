#include <stdio.h>
int main(void)
{
	int n,i,t,l=0;
	char s[100];
	scanf("%s\t%d",&s,&n);
	for(i=0;s[i]!='\0';i++)
	l++;
	t=l-n;
	for(i=t;s[i]!='\0';i++)
	printf("%c",s[i]);
	return 0;
}
