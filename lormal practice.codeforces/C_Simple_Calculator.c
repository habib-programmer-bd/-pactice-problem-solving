#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long Addition = a + b;
    long long Multiplication = a * b;
    long long Subtraction = a - b;

    printf("%lld + %lld = %lld\n", a, b, Addition);
    printf("%lld * %lld = %lld\n", a, b, Multiplication);
    printf("%lld - %lld = %lld\n", a, b, Subtraction);
    return 0;
}