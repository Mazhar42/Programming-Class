#include <stdio.h>
int main()
{
    struct hello
    {
        int a;
        int b;
        char c;
    };

    typedef struct hello hey;
    hey x;

    scanf("%d %d %c", &x.a, &x.b, &x.c);
    printf("%d %d %c\n", x.a, x.b, x.c);
    printf("%d", sizeof(hey));
}
