#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 1 << " ";
        }
        for (int j = i; j <= a; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}