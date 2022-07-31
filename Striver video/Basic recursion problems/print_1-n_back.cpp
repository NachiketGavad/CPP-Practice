#include <bits/stdc++.h>
using namespace std;
void back_num(int n)
{
    if (n < 1)
    {
        return;
    }
    back_num(n - 1);
    cout << n << "\n";
}
int main()

{
    int n;
    cin >> n;
    back_num(n);
    return 0;
}