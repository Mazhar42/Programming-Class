#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j, count = 1000;

    for (i = 1; i <= 200; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d\t", count--);
        }
        printf("\n");
    }
    return 0;
}