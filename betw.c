#include<stdio.h>
void main()
{
  int n,m,a,i,f=0;
  printf("enter the two number");
  scanf("%d %d",&n,&m);
  printf("enter the between num");
  scanf("%d",&a);
  for(i=n;i<=m;i++)
  {
    if(i==a)
    {
      f=1;
      break;
    }
  }
  if(f==0)
  {
    printf("No");
  }
  else
  {
    printf("yes");
  }
}
