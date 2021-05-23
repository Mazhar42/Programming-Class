#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[1000], ch;
char temp[1000];

int main()
{
    int test, i, n;
    scanf("%d", &test);
    int max = -1000000;
    for (i = 1; i <= test; i++)
    {
        scanf("%d", &n);
        if (test == 1)
        {
            puts("YES");
            return 0;
        }
        if (max > n)
        {
            puts("NO");
            return 0;
        }
        else
            max = n;
    }
    puts("YES");

    return 0;
}