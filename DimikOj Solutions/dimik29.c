#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int test;
    char x;
    scanf("%d", &test);

    while (test--)
    {
        scanf(" %c", &x);
        if (isalnum(x))
        {
            if (isalpha(x))
            {
                if (islower(x))
                {
                    puts("Lowercase Character");
                }
                else
                {
                    puts("Uppercase Character");
                }
            }
            else if (isdigit(x))
            {
                puts("Numerical Digit");
            }
        }
        else
            puts("Special Character");
    }
    return 0;
}