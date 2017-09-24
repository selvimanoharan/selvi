#include<stdio.h>
void main()
{
  int first,last,i,f=0;
  printf("enter the limit");
  scanf("%d%d",&first,&last);
  while(first<last)
  {
    for(i=2;i<=first/2;++i)
    {
      if(first%i==0)
      {
        f=1;
        break;
      }
    }
    if(f==0)
    {
      printf("%d",first);
      ++first;
    }
  }
  
}
