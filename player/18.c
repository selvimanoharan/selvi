#include<stdio.h>
#include<string.h>
void main()
{
int n,a[10],i,c,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(n%i==0)
  {
    c=0;
    for(j=1;j<=n;j++)
    {
  if(i%2==0)
  {
    c++;
  }
    }
  if(c==2)
  {
    printf("%d",i);
  }
  }
}
}
