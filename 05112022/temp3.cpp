#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
using namespace std;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
int knapSack(int W, int wt[], int val[], int n)
{
    vector<pair<int, int>> array;
    for (int i = 0; i < n; i++)
    {
        array.push_back(make_pair(wt[i], val[i]));
    }
    sort(array.begin(), array.end(), sortbysec);
    int count = 0;
    int value = 0;
    for (auto i : array)
    {
        if (count + i.first <= W)
        {
            count += i.first;
            value += i.second;
        }
    }
    return value;
}
int main()
{

    return 0;
}