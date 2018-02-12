#include<stdio.h>
void main()
{
  int n,c=0;
  printf("enter the the no");
  scanf("%d",&n);
  while(n!=0)
  {
  n=n/10;
  c++;
}
printf("count is %d",c);
}
