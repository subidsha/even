#include <stdio.h>
int main(void)
{
    int n,k,i,a[10],count=0;
    scanf("%d\t%d",&n,&k);
    for(i=0;i<=n;i++)
    scanf("%d\t",&a[i]);
    for(i=0;i<=n;i++)
    {
    if(a[i]%2!=0)
    {
    	count++;
    }
    if(count==k)
    {
    	printf("%d is the %d odd number",a[i],k);
    	break;
    }
    }
    return 0;
}
