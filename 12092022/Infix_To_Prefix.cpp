#include <iostream>
#include <stack>
#include <cmath>
#include <algorithm>
//#include<climits>
//#include<vector>
using namespace std;
int prec(char a)
{
    if (a == '^')
    {
        return 3;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void toprefix(string a)
{
    stack<char> b;
    string final;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '(')
        {
            a[i] = ')';
        }
        else if (a[i] == ')')
        {
            a[i] = '(';
        }
    }
    reverse(a.begin(), a.end());

    for (int i = 0; i < a.length(); i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            final += a[i];
        }

        else if (a[i] == '(')
        {
            b.push(a[i]);
        }
        else if (a[i] == ')')
        {
            while (b.top() != '(' && !b.empty())
            {
                final += b.top();
                b.pop();
            }
            if (!b.empty())
            {
                b.pop(); /* code */
            }
        }
        else
        {
            while (!b.empty() && prec(a[i]) <= prec(b.top()))
            {
                final += b.top();
                b.pop();
            }
            b.push(a[i]);
        }
    }
    while (!b.empty())
    {
        final += b.top();
        b.pop();
    }
    reverse(final.begin(), final.end());
    cout << "Infix of " << a << " is " << final;
    return;
}

int main()
{
    toprefix("(a/b)*(b/c)");

    return 0;
}