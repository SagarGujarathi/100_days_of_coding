#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int catalan(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += catalan(i) * catalan(n - i - 1);
    }
    return result;
}
int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout << catalan(i) << " ";
    }

    return 0;
}