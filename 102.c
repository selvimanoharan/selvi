#include<stdio.h>
void main()
{
  int n,i;
  printf("enter the num");
  scanf("%d",&n);
  while(n%2==0)
  {
    i=n/2;
    n=i;
  }
  printf("%d",n);
}
