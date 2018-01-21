#include<stdio.h>
int main()
{
	char s;
	scanf("%c",&s);
	if((s>=97&&s<=122)||(s>=65&&s<=90))
	{
		printf("\n is not numeric",s);
	}
	else
	{
		printf("it is numeric",s);
	}
	return 0;
}
