#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int testCase;
    float runsTaken, runsRequired, ballsRemaining;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%f %f %f", &runsRequired, &runsTaken, &ballsRemaining);
        float currentRunRate = (runsTaken * 6.0) / (300.0 - ballsRemaining);
        float requiredRunRate = (runsRequired >= runsTaken) ? ((runsRequired - runsTaken + 1.0) * 6.0) / ballsRemaining : 0;
        printf("%.2f %.2f\n", currentRunRate, requiredRunRate);
    }
    return 0;
}