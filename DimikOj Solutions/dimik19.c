#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[1000], ch;
char temp[10001];

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        scanf(" %[^\n]", a);
        int len = strlen(a);
        int i, wordCount = 0;
        for (i = 0; i < len; i++)
        {
            if (a[i] == ' ')
            {
                wordCount++;
            }
        }
        printf("Count = %d\n", wordCount + 1);
    }

    return 0;
}