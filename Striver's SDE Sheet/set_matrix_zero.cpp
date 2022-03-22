#include <bits/stdc++.h>
using namespace std;
void set_zeros(vector<vector<int>> & arr)
{
    int i, j, k;
    for (i = 0; i < arr.size(); i++)
    {
        for (j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == 0)
            {
                for ( k = 0; k < arr[0].size(); k++)
                {
                    arr[i][k] = 0;
                }
                for ( k = 0; k < arr.size(); k++)
                {
                    arr[k][j] = 0;
                }
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr;
    int i, j;
    arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    set_zeros(arr);

    cout << "Final Matrix\n";
    for (i = 0; i < arr.size(); i++)
    {
        for (j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << "\n";
    }

    return 0;
}