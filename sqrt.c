#include<stdio.h>
#include<math.h>
void main()
{
  int a,i,b,c,f=0;
  printf("enter the number");
  scanf("%d%d",&a,&b);
  c=a*b;
  for(i=0;i<=c;i++)
  {
    if(c==i*i)
    {
      f=1;
    }
  }
  if(f==1)
  {
    printf("yes");
  }
    else
    {
      printf("No");
    }
  }
