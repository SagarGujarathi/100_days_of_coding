#include <iostream>
#include <deque>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cout << "Donate : ";
    cin >> s;
    deque<char> a;
    for (int i = 0; i < s.length(); i++)
    {
        if (i < s.length() - 1 && islower(s[i]) && isupper(s[i + 1]))
        {
            a.push_back(s[i + 1]);
            a.push_back(s[i]);
            a.push_back('*');
            i++;
        }
        else if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
        {
            a.push_back('o');
            a.push_front(s[i]);
        }
        else
        {
            a.push_back(s[i]);
        }
    }
    cout << endl;

    while (!a.empty())
    {
        cout << a.front();
        a.pop_front();
    }

    return 0;
}