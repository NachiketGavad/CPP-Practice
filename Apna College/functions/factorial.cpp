#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{
    int factorial = 1, i;
    for (i = 2; i <= num; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}