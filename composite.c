#include<stdio.h>
void main()
{
  int a,count=0,i,n;
  printf("enter the number");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
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
