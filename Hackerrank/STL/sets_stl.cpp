#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// Sets are a part of the C++ STL. Sets are containers that store unique elements
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, n, x, y;
    cin >> n;
    set<int> s;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;
        switch (x)
        {
        case 1:
            s.insert(y);
            break;
        case 2:
            s.erase(y);
            break;
        case 3:
            set<int>::iterator itr = s.find(y);
            if (itr != s.end()) // //If value is not present then itr==s.end().
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }

            break;
        }
    }

    return 0;
}
