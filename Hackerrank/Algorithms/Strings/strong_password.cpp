#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password)
{
    // Return the minimum number of characters to make the password strong
    int i, min, dig = 0, lower = 0, upper = 0, special = 0;
    for (i = 0; i < password.size(); i++)
    {
        if (password[i] >= 65 && password[i] <= 90)
        {
            upper = 1;
        }
        else if (password[i] >= 97 && password[i] <= 122)
        {
            lower = 1;
        }
        else if (password[i] >= 48 && password[i] <= 57)
        {
            dig = 1;
        }
        else
        {
            special = 1;
        }
    }
    int diff = 6 - password.size();
    if (diff <= 0)
    {
        min = 4 - (dig + upper + lower + special);
    }
    else
    {
        min = diff;
    }
    return min;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
