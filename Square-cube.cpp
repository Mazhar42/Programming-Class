#include <bits/stdc++.h>
using namespace std;

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
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
        cout << square(x) << endl;
        cout << cube(x) << endl;
    }
    return 0;
}
