#include<stdio.h>
void main()
{
  int n,result=0,rem,remin;
  printf("enter the num");
  scanf("%d",&n);
while(n!=0)
{
  rem=n%10;
  result=result*10+rem;
  n=n/10;
}
while(result!=0)
{
  remin=result%10;
  printf("%d\t",remin);
  result=result/10;
  
}
}
