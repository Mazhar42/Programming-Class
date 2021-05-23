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
        int count = 0;
        scanf("%s", mainString);
        scanf("%s", subString);

        if (strstr(mainString, subString))
        {
            for (i = 0; i < strlen(mainString); i++)
            {

                int k = i, l = 0;
                for (j = 0; j < strlen(subString); j++)
                {
                    if (mainString[k++] == subString[j])
                    {
                        l++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (l == strlen(subString))
                    count++;
            }
            printf("%d\n", count);
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}