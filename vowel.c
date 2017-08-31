#include <stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    char a;
    printf("enter the letter");
    scanf("%c",&a);
    if((char==a||char==e||char==i||char==o||char==u||char==A||char==E||char==I||char==O||char==U)||a)
    {
        printf("vowel");
    }
    else
    {
        printf("not a vowel");
    }
    getch();
}

