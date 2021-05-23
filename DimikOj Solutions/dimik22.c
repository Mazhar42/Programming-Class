#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPrime(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;
    int i;
    for (i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int test, a, b;
    scanf("%d", &test);

    while (test--)
    {
        scanf("%d %d", &a, &b);
        int i, count = 0;
        for (i = a; i <= b; i++)
        {
            if (isPrime(i))
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}