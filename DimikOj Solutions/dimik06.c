#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int test, n, i, j;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        int lastDigit = n % 10;
        int firstDigit = n / 10000;
        int sum = firstDigit + lastDigit;
        printf("Sum = %d\n", sum);
    }
    return 0;
}