#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        int a;
        scanf("%d", &a);
        if (a == 0)
        {
            printf("0");
        }
        else
        {
            while (a != 0)
            {
                printf("%d ", a % 10);
                a /= 10;
            }
        }

        printf("\n");
    }

    return 0;
}