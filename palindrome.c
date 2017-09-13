#include<stdio.h>
void main()
{
int n,rem,result=0,t;
printf("enter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
result=result*10+rem;
n=n/10;
}
if(t==result)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
