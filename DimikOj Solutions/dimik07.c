#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int testCase, i = 0;
    char a[10000];
    scanf("%d", &testCase);
    while (testCase--)
    {
        int count = 0;
        scanf(" %[^\n]", a);
        for (i = 0; i < strlen(a); i++)
        {
            if (a[i] == ' ')
            {
                while (a[i] == ' ')
                {
                    i++;
                }
                count++;
            }
        }

        printf("%d\n", count + 1);
    }
    return 0;
}