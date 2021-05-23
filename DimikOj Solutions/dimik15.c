#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[10000], ch;
char Arr[26];

void solve()
{
    scanf(" %[^\n]", a);

    int i, n, count = 0;
    n = strlen(a);
    for (i = 0; i < n; i++)
    {
        Arr[a[i] - 97]++;
    }
}

void init()
{
    int i;
    for (i = 0; i < 26; i++)
    {
        Arr[i] = 0;
    }
}

void print(int n)
{
    int i;
    for (i = 0; i < 26; i++)
    {
        if (Arr[i])
            printf("%c = %d\n", i + 97, Arr[i]);
    }
    if (n != 0)
        printf("\n");
}
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        init();
        solve();
        print(test);
    }
}