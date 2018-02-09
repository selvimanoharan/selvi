#include<stdio.h>
void main()
{
  int rev=0,n,rem=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
  }
  printf("reverse number: %d",rev);
}
