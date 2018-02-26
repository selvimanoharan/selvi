#include<stdio.h>
void main()
{
  int n,i,a[10],k,f=1,j;
  
  printf("enter the the no");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the number ");
  scanf("%d",&k);
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
  for(i=0;i<n;i++)
  {
    if((i+1)==k)
    {
      printf("%d",a[i]);
    }
    
    
  }
}
