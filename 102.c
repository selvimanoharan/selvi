#include<stdio.h>
void main()
{
  int n;
  printf("enter the num");
  scanf("%d",&n);
  if(n%2==0)
  {
    n=n/2;
    while(n%2==0)
    {
      printf("%d",n);
    }
    printf("%d",n);
    }
  else
  {
    printf("%d",n);
  }
}
