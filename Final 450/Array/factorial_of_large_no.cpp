#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{
    int factorial = 1, i;
    if (num != 0)
    {
        for (i = num; i > 0; i--)
        {
            factorial *= i;
        }
    }
    else
    {
        factorial = 1;
    }

    return factorial;
}

int largeno(vector<int> ar)
{
    int i, large = INT32_MIN;
    for (i = 0; i < ar.size(); i++)
    {
        if (ar[i] > large)
        {
            large = ar[i];
        }
    }
    return large;
}

int main()
{
    int n, i, x;
    cin >> n;
    vector<int> ar;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        ar.push_back(x);
    }
    int large = largeno(ar);
    cout << fact(large);
    return 0;
}