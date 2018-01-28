#include<stdio.h>
#include<string.h>
void main()
{
	int count=1,a;
	char str[50];
  printf("Enter the string");
  gets(str);
	a=strlen(str);
	for(int i=0;i<=a;i++)
	{
		if(str[i]==' ')
		{
		    count++;
		}
	}
	printf("The no of space in the line is %d\n",count);
}
