#include<stdio.h>
void main()
{
  int n, a[10],i,j;
  printf("enter the num");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
}
for(i=n-1;i>=0;i--)
{
  printf("%d",a[i]);
}
}
