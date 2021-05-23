#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, a, j, n;
    scanf("%d", &n);
    int dummy = -1000;
    for (i = 0, j = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (dummy <= a)
        {
            dummy = a;
            j++;
        }
    }
    if (j == n)
        puts("YES");
    else
        puts("NO");

    return 0;
}