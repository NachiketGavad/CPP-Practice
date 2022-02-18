#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int n) // function declaration /array parameter/ []
{
    int i;
    n -= 1; //last index is less than 1 from size
    for (i = 0; i < n; i++, n--)
    {
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
    }

    return;
}

void print_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    cout << "Before reverse\n";
    print_array(arr, n);
    reverse_array(arr, n);
    cout << "After reverse\n";
    print_array(arr, n);

    return 0;
}