#include <stdio.h>
int main()
{
    int a;
    int Addition = 0;
    scanf("%d", &a);
    for (int i = 1; i <= 12; i++)
    {
        Addition = a * i;
        printf("%d * %d = %d\n", a, i, Addition);
    }

    return 0;
}