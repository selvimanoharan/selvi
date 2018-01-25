#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the two number");
	scanf("%d %d",&a,&b);
	printf("before swap%d %d\n",a,b);
	
  a=a^b;
  b=a^b;
  a=a^b;
  printf("after swap%d %d",a,b);
}
