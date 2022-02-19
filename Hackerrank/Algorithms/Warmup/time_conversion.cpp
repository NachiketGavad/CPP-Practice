#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int hr;
    char ch;
    string temp, time;
    stringstream ss, news;
    if (s[8] == 'A' || s[8] == 'a')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
        time = s.substr(0, 8); // substr() -> start , length
    }
    if (s[8] == 'P' || s[8] == 'p')
    {
        ss << s;
        ss >> hr;
        if (hr != 12)
        {
            hr += 12;
        }
        news << hr;
        news >> temp;
        time = temp + s.substr(2, 6);
    }

    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
