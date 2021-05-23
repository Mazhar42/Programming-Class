#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int test;
    char a[1001];
    scanf("%d", &test);

    while (test--)
    {
        scanf(" %[^\n]", a);
        int i;
        int len = strlen(a);
        for (i = len - 1; i >= 0; i--)
        {
            printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}