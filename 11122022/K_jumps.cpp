#include <bits/stdc++.h>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <map>
using namespace std;
int main()
{
    int n;
    int k;
    vector<int> array, heights;
    for (int i = 1; i < n; i++)
    {
        int count = INT_MAX;
        for (int j = 1; j <= k && i - j >= 0; j++)
        {
            count = min(count, array[i - j] + abs(heights[i] - heights[i - j]));
        }
        array[i] = count;
    }
    return 0;
}