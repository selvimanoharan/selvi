#include<stdio.h>
int main()
{
  int n,rem,result=0,i;
  printf("enter the digit");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
  rem=n%10;
  n=n/10;
  result=result+rem;
  }
  printf("count of the digit %d",result);
  
  return 0;
}


 

  
  
  
