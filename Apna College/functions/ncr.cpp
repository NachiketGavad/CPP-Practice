/*
 ncr = n!/r!*(n-r)!
*/

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
    int n, r;
    cin >> n >> r;
    cout << fact(n) / (fact(r) * fact(n - r));
    return 0;
}