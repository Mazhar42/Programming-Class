#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[10000], ch;
char Arr[26];

void solve()
{
    scanf(" %[^\n]", a);
    scanf(" %c", &ch);
    char c = tolower(ch);
    int i, n, count = 0;
    n = strlen(a);
    for (i = 0; i < n; i++)
    {
        char x = tolower(a[i]);
        if (x == c)
            count++;
    }
    if (!count)
        printf("'%c' is not present\n", ch);
    else
        printf("Occurrence of '%c' in '%s' = %d\n", ch, a, count);
}

void init()
{
    int i;
    for (i = 0; i < 26; i++)
    {
        Arr[i] = 0;
    }
}

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        init();
        solve();
    }
}