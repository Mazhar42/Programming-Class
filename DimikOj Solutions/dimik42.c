#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int test, n;
    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        int i;
        for (i = n; i >= 0; i--)
        {
            if (i == 0)
            {
                printf("1\n");
            }
            else if (i == 1)
            {
                printf("2 + ");
            }
            else
            {
                printf("2^%d + ", i);
            }
        }
    }
    return 0;
}