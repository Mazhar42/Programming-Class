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
        for (i = 0; i < len; i++)
        {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                printf("%c", a[i]);
            if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                printf("%c", a[i]);
        }
        printf("\n");
        for (i = 0; i < len; i++)
        {
            if (isalpha(a[i]))
            {
                if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                    continue;
                else if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                    continue;
                else
                    printf("%c", a[i]);
            }
        }
        printf("\n");
    }

    return 0;
}