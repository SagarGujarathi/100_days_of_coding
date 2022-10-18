#include <iostream>
#include <vector>
#include <iterator>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int array[] = {1, 2, 3, 4, 5};
    for (auto b : a)
    {
        cout << b << " ";
    }
    cout << endl;
    vector<int>::iterator c;
    for (c = a.begin(); c != a.end(); c++)
    {
        cout << *c << " ";
    }
    cout << endl;
    for (int d : array)
    {
        cout << d << " ";
    }
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
    }

    return 0;
}