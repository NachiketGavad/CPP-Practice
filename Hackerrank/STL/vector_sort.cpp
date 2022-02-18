#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n, i, x;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for (auto i = v.begin(); i < v.end(); i++) //auto keyword for detecting data type
    {
        cout << *i << " ";
    }

    return 0;
}
