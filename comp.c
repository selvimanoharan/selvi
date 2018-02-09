#include<stdio.h>
void main()
{
  int count=0,i,n;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    
{
  count++;
}
  }
  if(count==2)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
}
