
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, m, n;
    cin >> n;
    m = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << m << " ";
            m++;
        }
        cout << endl;
    }

    return 0;
}