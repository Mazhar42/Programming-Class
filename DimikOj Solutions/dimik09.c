#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int test, n, i, j;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        int temp = (int)sqrt(n);
        if (temp * temp == n)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}