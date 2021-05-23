#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[1000], ch;
char temp[1000];

int isVowel(int k)
{
    int vowel[] = {'a', 'e', 'i', 'o', 'u'};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (vowel[i] == k)
            return 1;
    }
    return 0;
}

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        scanf(" %[^\n]", a);
        int len = strlen(a);
        int i, count = 0;
        for (i = 0; i < len; i++)
        {
            if (isalpha(a[i]))
            {
                char x = tolower(a[i]);
                if (isVowel(x))
                    count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }

    return 0;
}