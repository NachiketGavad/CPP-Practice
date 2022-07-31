#include <bits/stdc++.h>
using namespace std;
void back_num(int i, int n)
{
    if (i > n)
    {
        return;
    }
    back_num(i + 1, n);
    cout << i << "\n";
}
int main()

{
    int n;
    cin >> n;
    back_num(1, n);
    return 0;
}