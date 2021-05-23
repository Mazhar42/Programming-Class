#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int test;
    char a[101];
    scanf("%d", &test);

    while (test--)
    {
        scanf("%s", a);
        int len = strlen(a);
        int lastdigit = a[len - 1] - '0';
        if (lastdigit % 2)
            puts("odd");
        else
            puts("even");
    }
    return 0;
}