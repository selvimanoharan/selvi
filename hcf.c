#include<stdio.h>
void main()
{
  int e,f,i,hcd;
  printf("enter the two number");
  scanf("%d%d",&e,&f);
  for(i=1;i<=e&&i<=f;i++)
  {
    if(e%i==0&&f%i==0)
    hcd=i;
  }
printf("gcd no is %d",hcd);
}
