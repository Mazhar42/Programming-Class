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
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        if (test)
            printf("\n");
    }
    return 0;
}