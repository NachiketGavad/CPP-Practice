#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    vector<int> v;        // dynamic array v of data type int
    stringstream ss(str); // give string as input in brackets for stringstream
    int temp;
    char ch;
    while (ss >> temp)
    {
        v.push_back(temp); // pushing integer to vector
        ss >> ch;          // comma
    }

    return v;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}