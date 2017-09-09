#include<stdio.h>
void main()
{
  int e,b;
  int result=1;
  printf("enter the base");
  scanf("%d",&b);
  printf("enter the exponential");
  scanf("%d",&e);
  while(e!=0)
  {
    result=result*b;
    --e;
  }
  printf("power is%d",result);
}
