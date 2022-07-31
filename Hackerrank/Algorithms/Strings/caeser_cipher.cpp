#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k)
{
    int i, val;
    k = k % 26; //if input key is greater than 26
    char c;
    string cipher = s;
    for (i = 0; i < s.size(); i++)
    {
        c = s[i];
        if (int(c) >= 65 && int(c) <= 90)
        {
            val = int(c) + k;
            if (val > 90)
            {
                val -= 26;
            }
        }
        else if (int(c) >= 97 && int(c) <= 122)
        {
            val = int(c) + k;
            if (val > 122)
            {
                val -= 26;
            }
        }
        else
        {
            val = int(c);
        }
        cipher[i] = char(val);
    }
    return cipher;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

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
