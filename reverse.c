#include<stdio.h>
void main()
{
  int rem,n,result=0;
  printf("enter the no");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    result=result*10+rem;
    n=n/10;
  }
    printf("reverse no is%d",result);
}
