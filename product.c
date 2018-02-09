#include<stdio.h>
void main()
{
  int sum=1,n,rem=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    sum=sum*rem;
    n=n/10;
  }
  printf(" %d",sum);
}

