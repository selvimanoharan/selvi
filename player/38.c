#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the num");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           if(i%2==0)
           {
            printf("%d\n",i);
        }
        }
    }
}
