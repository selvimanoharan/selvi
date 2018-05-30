#include<stdio.h>
void main()
{
    int i,a[100],n,j,k,temp=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
 }
 for(i=1;i<=n;i++)
 {
     if(i==k)
     {
         printf("kth smallest no %d",a[k]);
     }
 }
}
