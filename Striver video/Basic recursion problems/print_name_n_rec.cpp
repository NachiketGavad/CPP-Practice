#include <bits/stdc++.h>
using namespace std;
void rec_name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << "nachiket\n";
        rec_name(i + 1, n);
    }
}
int main()
{
    int n;
    cin >> n;
    rec_name(1, n);
    return 0;
}