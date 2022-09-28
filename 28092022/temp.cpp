#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    string a = "hello";
    reverse(a.begin(), a.end());
    a = a.substr(1);
    a = a.substr(1);
    for (int i = 0; i < a.length(); i++)
    {
        cout << a[i];
    }

    return 0;
}