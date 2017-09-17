#include<stdio.h>
void main()
{
int f,l,i;
printf("enter the first and second interval");
scanf("%d%d",&f,&l);
for(i=f;i<=l;i++)
{
  if(i%2==0)
  {
    printf("%d",i);
  }
}
}
