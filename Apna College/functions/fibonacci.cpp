/*
0
1
1
2
3
5
*/
#include <bits/stdc++.h>
using namespace std;

void fib(int num)
{
    int t1 = 0, t2 = 1, i, next_term;
    cout << t1 << "\n";
    cout << t2 << "\n";
    for (i = 0; i < num; i++)
    {
        next_term = t1 + t2;
        cout << next_term << "\n";
        t1 = t2;
        t2 = next_term;
    }

    return;
}

int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}