#include<stdio.h>
void main()
{
  int b[10],i,n;
  printf("enter the number");
  scanf("%d",&n);
  printf("enter the number");
  
  for(i=0;i<n;i++)
  {
  scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    if(b[i]%2!=0)
    {
      printf("%d",b[i]);
    }
  }
}
  
  
