#include<stdio.h>
void main()
{
    int n,a[10],i;
    printf("enter the number");
    scanf("%d",&n);
    printf("elememts");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(a[i]>a[i+1])
{
    printf("%d ",--a[i+1]);
}
}
}
