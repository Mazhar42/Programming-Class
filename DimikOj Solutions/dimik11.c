#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

long long factorial(long long n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int test;

    long long n;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%lld", &n);
        printf("%lld\n", factorial(n));
    }
    return 0;
}