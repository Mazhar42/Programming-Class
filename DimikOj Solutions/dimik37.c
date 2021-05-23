#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[10][100];
    char temp[100];
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        puts(str[i]);
    }

    return 0;
}