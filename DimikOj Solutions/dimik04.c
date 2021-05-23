#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int test, n, i, cases = 1;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        printf("Case %d: ", cases++);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0 && n != i)
                printf("%d ", i);
            else if (n == i)
                printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}