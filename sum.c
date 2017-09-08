#include<stdio.h>
void main()
{
  int n,i;
  int count=0;
  printf("enter the no");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    count=count+i;
    i++;
  }
  printf("sum of no is%d",count);
}
