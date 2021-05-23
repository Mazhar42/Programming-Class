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
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}