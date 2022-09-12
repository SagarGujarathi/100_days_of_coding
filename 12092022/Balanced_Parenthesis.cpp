#include <iostream>
#include <stack>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
void sorting(string a)
{
    stack<char> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '{' || a[i] == '[' || a[i] == '(')
        {
            b.push(a[i]);
        }
        else
        {
            if (a[i] == b.top())
            {
                b.pop();
            }
            else if (b.empty())
            {
                cout << "Its an unbalanced parenthesis!" << endl;
                return;
            }
        }
    }
    cout << "It's a balanced parenthesis!" << endl;
    return;
}

int main()
{
    sorting("[{()}]");

    return 0;
}