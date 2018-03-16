#include<stdio.h>
void main()
{
    int i,n,a[10],j,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        f=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                f=1;
            }
        }
        if(f==0)
        {
            printf("%d",a[i]);
        }
    }
}
