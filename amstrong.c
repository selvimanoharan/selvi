#include<stdio.h>
void main()
{
  int rem,t,n,result=0;
  printf("enter the number");
  scanf("%d",&n);
  t=n;
  while(n!=0)
  {
    rem=n%10;
    result=result+rem*rem*rem;
    n=n/10;
  }
  if(t==result)
  {
    printf("amstrong no");
  }
  else
  {
    printf("not amstrong no");
  }
}
