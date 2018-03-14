#include<stdio.h>
#include<string.h>
void main()
{
    int n,a[10],i,j,c;
    printf("enter the num");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      c=0;
        for(j=i+1;j<=n;j++)
        {
        if(a[i]==a[j])
        {
         c++;
         break;
        }
        }
        if(c==0)
        {
        printf("%d",a[i]);
        }
    }
}
