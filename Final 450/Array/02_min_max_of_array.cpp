//optimised available

#include <bits/stdc++.h>
using namespace std;

int min(int arr[], int n)
{
    int min, i;
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}

int max(int arr[], int n)
{
    int max, i;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mini = min(arr, n);
    int maxi = max(arr, n);
    cout << "minimum number " << mini << "\n"
         << "maximum number " << maxi;
    return 0;
}