#include<stdio.h>
void main()
{
int n,m,c;
printf("enter the num ");
scanf("%d %d",&n,&m);
c=n-m;
if(c%2==0)
{
  printf("even");
}
else
{
  printf("odd");
}
}
