#include<stdio.h>
void main()
{
	int m,n,temp;
	printf("enter the two number");
	scanf("%d %d",&n,&m);
	printf("before swap%d %d\n",n,m);
	
  temp=n;
  n=m;
  m=temp;
  printf("after swap%d %d",n,m);
}
