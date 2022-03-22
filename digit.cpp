#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dig, original = n, count = 0;
    while (n > 0)
    {
        dig = n % 10;
        n = n / 10;
        // cout << dig << "\n";
        if (dig != 0 && original % dig == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}