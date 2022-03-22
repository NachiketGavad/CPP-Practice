// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printPat(n);
        cout << endl;
    }
} // } Driver Code Ends

/*You are required to complete this method*/
void printPat(int n)
{
    // Your code here
    for (int j = n; j >= 1; j--)
    {
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            while (count < n - i && j - i > 0)
            {
                cout << j - i << " ";
                count++;
            }
        }
        printf("$");
    }
}