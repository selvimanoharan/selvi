#include<stdio.h>
void main()
{
    int number,n;
    printf("enter the number");
    scanf("%d",&number);
    while(number%10!=0)
    {
        number++;
    }
printf("\nnearest greater multiple %d",number);
}
