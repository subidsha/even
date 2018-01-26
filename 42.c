#include<stdio.h>
int main()
{
char a[10],b[10];
int s,t;
scanf("%s",&a);
scanf("\n%s",&b);
s=strlen(a);
t=strlen(b);
if(s>t)
{
	printf("%s",a);
}
else if(s<t)
{
	printf("%s",b);
}
else
{
	printf("%s",a);
}
return 0;
}
