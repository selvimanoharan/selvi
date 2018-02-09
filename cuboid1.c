#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c,d;
  printf("enter the length breath and width");
  scanf("%d %d %d",&a,&b,&c);
  d=(2*(a*b))+(2*(b*c))+(2*(c*a));
  printf("total area: %d",d);
  printf("volume: %d",a*b*c);
}
