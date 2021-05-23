#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int test, i, n;

    scanf("%d", &test);

    while (test--)
    {
        int sum = 0;
        scanf("%d", &n);
        int num = n;
        while (num != 0)
        {
            int digit = num % 10;
            sum += cube(digit);
            num /= 10;
        }

        if (n == sum)
            printf("%d is an armstrong number!\n", n);
        else
            printf("%d is not an armstrong number!\n", n);
    }
    return 0;
}