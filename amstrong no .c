int main()
{
    int l, h, i, e1, e2, rem, n = 0, r = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);
    printf("Armstrong numbers between %d an %d are: ", l, h);

    for(i = l + 1; i < h; ++i)
    {
        e2 = i;
        e1 = i;
        while (e1 != 0)
        {
            e1 /= 10;
            ++n;
        }
        while (e2 != 0)
        {
            rem = e2 % 10;
            r += pow(rem, n);
            e2 /= 10;
        }
        if (r == i)
        {
            printf("%d ", i);
        }
        n = 0;
        r = 0;

    }
    return 0;
}
