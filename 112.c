#include<stdio.h>
void main()
{
  int n,i,a[10],k,f=0;
  
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
    if(a[i]==k)
    {
    f=1;
    }
  }
  if(f==1)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
}
