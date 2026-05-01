#include <stdio.h>
int main()
{
    int a;

    int max = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int valu;
        scanf("%d", &valu);

        if (max < valu)
        {
            max = valu;
        }
    }
    printf("%d", max);

    return 0;
}