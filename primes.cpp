#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    else if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i = i + 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    /* code */
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (isPrime(x))
            cout << x << " is a Prime" << endl;
        else
            cout << x << " is not a Prime" << endl;
    }
    return 0;
}
