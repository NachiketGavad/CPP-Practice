#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    vector<int> v;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int erase_position, erase_range_s, erase_range_e;
    cin >> erase_position;
    v.erase(v.begin() + (erase_position - 1));

    cin >> erase_range_s >> erase_range_e;
    v.erase(v.begin() + (erase_range_s - 1), v.begin() + (erase_range_e - 1));

    cout << v.size() << "\n";
    for (auto i = v.begin(); i < v.end(); i++) // auto keyword for detecting data type
    {
        cout << *i << " ";
    }
    return 0;
}
