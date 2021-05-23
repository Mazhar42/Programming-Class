#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[1000], ch;
char temp[1000];

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        scanf(" %[^\n]", a);
        int len = strlen(a);
        int i, k, j;
        for (i = 0, k = 0; i < len; i++)
        {
            if (a[i] == ' ')
            {
                for (j = i - 1; j >= k; j--)
                {
                    printf("%c", a[j]);
                }
                k = i + 1;
                printf(" ");
            }
        }
        for (j = len - 1;; j--)
        {
            if (a[j] == ' ' || j == -1)
                break;
            else
                printf("%c", a[j]);
        }
        printf("\n");
    }

    return 0;
}