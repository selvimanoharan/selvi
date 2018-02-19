#include <stdio.h>
void main()
{
    int n, n2, i, gcd,lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &n2);

    for(i=1; i <= n && i <= n2; ++i)
    {
        
        if(n%i==0 && n2%i==0)
            gcd = i;
    }
lcm=(n*n2)/gcd;
    printf("L.C.M of %d and %d is %d ", n, n2,lcm);

 
}
