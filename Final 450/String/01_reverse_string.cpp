#include <bits/stdc++.h>
using namespace std;
int main()

{
    string s;
    cin >> s;
    int i, j = s.size() - 1;
    char temp;
    for (i = 0; i < s.size() / 2; i++)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }
    cout << s;
    return 0;
}