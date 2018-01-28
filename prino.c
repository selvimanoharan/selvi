#include<stdio.h>
void main()
{
  int n,i,c=0;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      c++;
    }
  }
  if(c==2)
  {
    printf("prime number");
    
  }
  else
  {
    printf("not prime");
  }
}
