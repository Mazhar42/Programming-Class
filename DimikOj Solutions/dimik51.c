#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

// char mainString[]

int main()
{
    int testCase, result, i, j;
    char mainString[130], subString[130];
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%s", mainString);
        scanf("%s", subString);

        for (i = 0; i < strlen(mainString); i++)
        {
            if (&mainString[i] == strstr(mainString, subString))
            {
                result = i;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}