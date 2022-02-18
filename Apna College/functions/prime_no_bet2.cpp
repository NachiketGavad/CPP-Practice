#include <bits/stdc++.h>
using namespace std;

bool prime(int num1)
{
    int i;
    for (i = 2; i < sqrt(num1); i++)
    {
        if (num1 % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b, i;
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i << "\n";
        }
    }
    return 0;
}