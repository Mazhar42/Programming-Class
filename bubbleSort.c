#include <stdio.h>
int main()
{
    int A[] = {10, 17, 6, 11, 8, 10, 9, 8, 1, 12};
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp;
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        for (k = 0; k < 10; k++)
        {
            printf("%d ", A[k]);
        }
        printf("\n");
    }
    return 0;
}
