#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, j;
    cin >> n;
    int arr[n], temp;
    for (i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    return 0;
}
