#include<stdio.h>
int main()
{
	char n;
	scanf("%c",&n);
	if((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
	{
		printf("the char is alphapet",n);
		
	}
	else
	{
		printf("the char is not alphapet",n);
	}
}
