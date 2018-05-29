#include<stdio.h>
void main()
{
    int a[10],n,j,i,temp;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("%d",a[1]);
}
