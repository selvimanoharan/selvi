#include<stdio.h>
int main()
{
  int n,i,a[10];
printf("enter the number");
scanf("%d",&n);
printf("array elements");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("elements with index ");
for(i=0;i<n;i++)
{
  if(i<n)
  {
    printf("%d %d\n",a[i],i );
    
  }
  }
}
