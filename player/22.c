#include<stdio.h>
#include<string.h>
void main()
{
  int n,m,i,g;
  printf("enter the number");
  scanf("%d %d",&n,&m);
  for(i=1;i<=n&&i<=m;i++)
  {
    if((n%i==0)&&(m%i==0))
    {
    g=i;
    }
  }
printf("%d",g);
}
