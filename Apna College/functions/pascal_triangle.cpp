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
    int i, j, n;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << (fact(i) / (fact(j) * fact(i - j))) << " ";
        }
        cout << endl;
    }

    return 0;
}