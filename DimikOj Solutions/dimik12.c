#include <stdio.h>

// Function to return trailing
// 0s in factorial of n
int findTrailingZeros(int n)
{
    // Initialize result
    int count = 0;

    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}

// Driver Code
int main()
{
    int n;
    int testCase, i = 0;

    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &n);
        printf("%d\n", findTrailingZeros(n));
    }
    return 0;
}