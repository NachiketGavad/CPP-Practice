#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1; // for total outer iterations
    while (counter < n - 1)
    {
        for (i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1]) //swapping adjacent if greater
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}