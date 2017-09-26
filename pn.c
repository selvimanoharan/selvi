#include <stdio.h>
int main()
{
    int l, h, i, r;
    printf("Enter two numbers ");
    scanf("%d %d", &l, &h);

    printf("Prime no between %d and %d are: ", l, h);

    while (l < h)
    {
        r = 0;

        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                r = 1;
                break;
            }
        }

        if (r == 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
}
