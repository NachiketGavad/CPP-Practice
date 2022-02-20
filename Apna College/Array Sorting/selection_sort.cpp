#include <bits/stdc++.h>
using namespace std;

// selection sort
// two halves, sorted & unsorted, minimum in unsorted swapped with the 1st element of unsorted
int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++) // input
    {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++) // for swapping,comp
    {
        for (j = i + 1; j < n; j++) // first of unsorted
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) // output
    {
        cout << arr[i] << " ";
    }
    return 0;
}
