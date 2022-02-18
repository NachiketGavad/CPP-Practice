
#include <iostream>
using namespace std;

int main()
{

    int i;
    int a[3], b[3], arr[2];
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    arr[0] = 0, arr[1] = 0;
    for (i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            arr[0] += 1;
        }
        if (a[i] < b[i])
        {
            arr[1] += 1;
        }
    }
    cout << arr[0] << " " << arr[1];
    return 0;
}