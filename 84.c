#include <stdio.h>
int main(void) 
{
	char s;
	scanf("%c",&s);
	if(('a'<=97||'z'>=123)&&('A'<=65||'z'>=91))
	{
		printf("%d",s);
	}
	return 0;
}
