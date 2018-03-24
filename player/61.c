#include<stdio.h>
void main()
{
    int n,m,a[10],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    if(n==2)
    {
        a[1]=a[2]+a[1];
        scanf("%d",&m);
    if(a[1]==m)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
}
