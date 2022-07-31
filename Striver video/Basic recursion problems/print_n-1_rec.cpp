#include <bits/stdc++.h>
using namespace std;
void rec_num(int n)
{
    if (n < 1)
    {
        return;
    }
    else
    {
        cout << n << "\n";
        rec_num(n-1);
    }
}
int main()

{
    int n;
    cin >> n;
    rec_num(n);
    return 0;
}