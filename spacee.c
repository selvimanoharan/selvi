#include<stdio.h>
#include<string.h>
void main()
{
	int sum=0 ,a;
	char str[50];
  printf("Enter the string");
  gets(str);
	a=strlen(str);
	for(int i=0;i<=a;i++)
	{
		if(str[i]==' ')
		{
		    sum=sum+1;
		}
	}
	printf("The no of space in the line is %d\n",sum);
}
