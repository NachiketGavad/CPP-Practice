#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n, i, first = 0, next = 1, nextterm;
    cin >> n;
    nextterm = 0;
    for (i = 0; i < n; i++)
    {
        cout << nextterm << "\n";
        first = next;
        next = nextterm;
        nextterm = first + next;
    }

    return 0;
}