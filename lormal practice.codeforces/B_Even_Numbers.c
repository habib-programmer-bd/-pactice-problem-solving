#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int flag = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
       printf("-1\n");
    }
    

    return 0;
}