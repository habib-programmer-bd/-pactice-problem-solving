#include <stdio.h>
int main()
{
    int a;
    int x;
    int even = 0, odd = 0, poss = 0, neg = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            poss++;
        }
        else if (0 > x)
        {
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", poss);
    printf("Negative: %d\n", neg);

    return 0;
}