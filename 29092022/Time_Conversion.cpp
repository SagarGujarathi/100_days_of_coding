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
    if (s[8] == 'P')
    {
        if (s[0] != '1' || s[1] != '2')
        {
            s[0] = ((int)s[0] + 1);
            s[1] = ((int)s[1] + 2);
        }
    }
    else
    {
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    reverse(s.begin(), s.end());
    s = s.substr(1);
    s = s.substr(1);
    reverse(s.begin(), s.end());

    return s;
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
