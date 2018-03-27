#include<stdio.h>
void main()
{
    int  i,n,a[10],k,f=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }

}
