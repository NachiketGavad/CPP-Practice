// no divide by 1 and by only it
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    bool flag = 0;
    cin >> n;
    for (i = 2; i < n; i++) // divide start from 2 // also loop can make shorter if only checked till sqrt(n)
    // logic : if number gets divided remainder is 0
    {
        if (n % i == 0)
        {
            flag = 1;
            cout << "Not prime";
            break; // breaking loop
        }
    }
    if (flag != 1) // not in loop //after checking all conditions
    {
        cout << "prime number";
    }

    return 0;
}