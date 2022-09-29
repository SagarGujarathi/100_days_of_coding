#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
#include <stack>
using namespace std;
bool check(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/' || a == '%')
    {
        return true;
    }
    return false;
}
void function(string a)
{
    stack<char> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (check(a[i]) || a[i] == '(')
        {
            b.push(a[i]);
        }
        else if (a[i] == ')')
        {
            while (check(a[i]))
            {
                b.pop();
            }
            if (check(b.top()))
            {
                b.pop();
            }
            else
            {
                cout << "Given equation has extra parenthesis!" << endl;
                return;
            }
        }
    }
    cout << "It has no extra parenthesis!" << endl;
    return;
}
int main()
{
    string a;
    cout << "Gimme input : ";
    cin >> a;
    function(a);

    return 0;
}