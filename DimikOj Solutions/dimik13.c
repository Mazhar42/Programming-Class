#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void init(int repeat[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        repeat[i] = 1;
    }
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int testCase;
    char str[10][100];
    char temp[100];
    int repeat[10];
    int i, j, len, result;
    scanf("%d", &testCase);
    while (testCase--)
    {

        init(repeat);
        for (i = 0;; i++)
        {
            scanf("%s", str[i]);
            if (getchar() == 10)
            {
                len = i + 1;
                break;
            }
        }

        for (i = 0; i < len - 1; i++)
        {
            for (j = i + 1; j < len; j++)
            {
                if (isalpha(str[i][0]))
                {
                    if (strcmp(str[i], str[j]) == 0)
                    {
                        repeat[i]++;
                        strcpy(str[j], "...");
                    }
                }
            }
        }

        // for (i = 0; i < 10; i++)
        // {
        //     printf("%d ", repeat[i]);
        // }

        result = fact(len);
        for (i = 0; i < 10; i++)
        {
            if (repeat[i] > 1)
                result /= fact(repeat[i]);
        }

        printf("1/%d\n", result);
    }

    return 0;
}