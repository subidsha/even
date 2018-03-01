#include <stdio.h>
int main(void)
{
    int n,k,i,a[10],j,t;
    scanf("%d\t%d",&n,&k);
    for(i=0;i<=n;i++)
    scanf("%d\t",&a[i]);
    for(i=0;i<=n;i++)
    {
       for(j=i+1;j<=n;j++)
       {
    if(a[i]>a[j])
    {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
    }
       }
    }
    printf("%d is the %d smallest number",a[k],k);
    return 0;
}
    
