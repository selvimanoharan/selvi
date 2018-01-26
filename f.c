#include<stdio.h>
int main()
{
	int a=0, b=1,c,i,v;
	printf("enter the number");
	scanf("%d",&v);
	printf("fibonacci series");
	for(i=0;i<v;i++)
	{
		printf("%d",a);
	c=a+b;
	a=b;
	b=c;
	}
}
