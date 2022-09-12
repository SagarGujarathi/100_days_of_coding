#include <iostream>
#include <stack>
#include <cmath>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
void Prefix(string a)
{
    stack<int> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            b.push(a[i] - '0');
        }
        else
        {
            int operator1 = b.top();
            b.pop();
            int operator2 = b.top();
            b.pop();
            switch (a[i])
            {
            case '+':
                b.push(operator1 + operator2);
                break;
            case '-':
                b.push(operator1 - operator2);
                break;
            case '*':
                b.push(operator1 * operator2);
                break;
            case '/':
                b.push(operator1 / operator2);
                break;
            case '%':
                b.push(operator1 % operator2);
                break;
            case '^':
                b.push(pow(operator1, operator2));
                break;

            default:
                break;
            }
        }
    }
    cout << b.top();
    return;
}

int main()
{
    Prefix("20+45*7+-");

    return 0;
}