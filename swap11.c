#include<stdio.h>
void main()
{
	int m1,n,temp;
	printf("enter the two number");
	scanf("%d %d",&n,&m1);
	printf("before swap%d %d\n",n,m1);
	
  temp=n;
  n=m1;
  m1=temp;
  printf("after swap%d %d",n,m1);
}
