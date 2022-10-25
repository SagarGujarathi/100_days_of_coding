#include <iostream>
#include <cmath>
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
    if (a < 2)
    {
        return 0;
    }
    int array[a + 1] = {0};
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (array[i] == 0)
        {
            for (int j = i + i; j <= a; j += i)
            {
                array[j] = 1;
            }
        }
    }
    for (int i = 2; i <= a; i++)
    {
        if (array[i] == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}