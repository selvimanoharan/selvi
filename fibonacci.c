#include<stdio.h>
int main()
{
	int a=0, b=1,c,i,n;
	printf("enter the number");
	scanf("%d",&n);
	printf("fibonacci series");
	for(i=0;i<n;i++)
	{
		printf("%d",a);
	c=a+b;
	a=b;
	b=c;
	}
}
