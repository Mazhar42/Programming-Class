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
        int i;
        int len = strlen(a);
        for (i = 0; i < len; i++)
        {
            printf("%d", a[i] - 64);
        }
        printf("\n");
    }
    return 0;
}