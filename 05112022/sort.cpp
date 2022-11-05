#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    vector<int> array;
    array.push_back(1);
    array.push_back(3);
    array.push_back(4);
    array.push_back(9);
    array.push_back(10);
    array.push_back(11);
    array.push_back(12);
    array.push_back(17);
    array.push_back(20);
    sort(array.begin(), array.end());
    for (auto i : array)
    {
        cout << i << " ";
    }
    return 0;
}