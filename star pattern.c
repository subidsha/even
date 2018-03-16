#include <stdio.h>
int main(void)
{
 char s[100];
 int n,t,l;
 scanf("%s",&s);
 l=strlen(s);
 if(l%2==0)
 {
 n=l/2;
 s[n]='*';
 s[n-1]='*';
 printf("%s",s);
 }
 else
 {
 t=(l/2)+1;
 s[t]='*';
 printf("%s",s);
 }
 return 0;
}
