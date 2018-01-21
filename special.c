#include<stdio.h>
#include<string.h>
void main()
{
	int sum=0,a,count=0;
	char str[50];
  printf("Enter the string");
  gets(str);
	a=strlen(str);
	for(int i=0;i<=a;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]==' '))
		{
		  count++;
		}
		else
		{
		  sum=sum+1;
		}
	}
	printf("The no of special character in the line is %d\n",sum);
}
