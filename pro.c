#include<stdio.h>
int main()
{
  int n,m,a;
  printf("enter the digit");
  scanf("%d%d",&n,&m);
  a=n*m;
  if(a%2==0)
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }
  
}
