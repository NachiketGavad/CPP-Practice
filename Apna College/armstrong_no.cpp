// sum of power of all digits is same number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, armstrong = 0, originaln, last_digit;
    cin >> n;
    originaln = n;
    while (n > 0)
    {
        last_digit = n % 10;
        armstrong += round(pow(last_digit, 3));
        n /= 10;
    }

    if (armstrong == originaln)
    {
        cout << "Its Armstrong number";
    }
    else
    {
        cout << "Its Not Armstrong number";
    }
    
    return 0;
}