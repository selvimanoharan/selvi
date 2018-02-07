#include<stdio.h>
void main()
{
  int n,a,b,c,d,e,f,i;
  printf("enter no of lines");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("number of the kabali team member ");
  scanf("%d %d",&a,&b);
  printf("number of opponent team number");
  scanf("%d %d",&c,&d);
  e=b-a;
  f=d-c;
  printf("%d %d\n",e,f);
  }

}
