#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int l,i,c=0;
	scanf("%[^\t\n]s",&a);
	l=strlen(a);
	for(i=0;i<=l;i++)
	{
	if((a[i]>'a'&&a[i]<'z')||(a[i]>'A'&&a[i]<'Z'))
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
	
}
