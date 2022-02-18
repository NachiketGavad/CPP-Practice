// input : 1234
// output : 4321
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, last_digit, reverse = 0;
    cin >> n;
    while (n > 0)
    {
        last_digit = n % 10;
        reverse = reverse * 10 + last_digit; //adding 10 of previous reverse to last digit
        n /= 10;
    }
    cout << reverse;
    return 0;
}