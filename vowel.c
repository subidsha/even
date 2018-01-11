#include<stdio.h>
int main()
	{
		char n;
		scanf("%s",&n);
		if((n=='a'||n=='e'||n=='i'||n=='o'||n=='u')||(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'))
{
	printf("the char is vowel",n);
	
}
else
{
	printf("the char is consonant",n);
}
}
