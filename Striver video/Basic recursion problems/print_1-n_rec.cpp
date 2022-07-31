#include <bits/stdc++.h>
using namespace std;
void rec_num(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << i << "\n";
        rec_num(i + 1, n);
    }
}
int main()

{
    int n;
    cin >> n;
    rec_num(1, n);
    return 0;
}