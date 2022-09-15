#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
#include <deque>
//#include <stack>
using namespace std;
int main()
{
    int a, b;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    cout << endl;
    cout << "Size of sub contigous array : ";
    cin >> b;
    cout << endl;
    cout << "Gimme inputs : ";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    deque<int> c;
    for (int i = 0; i < a; i++)
    {
        if (c.front() == i - b)
        {
            c.pop_front();
        }
        while (!c.empty() && array[i] > array[c.back()])
        {
            c.pop_back();
        }
        c.push_back(i);

        if (i >= b - 1)
        {
            cout << array[c.front()];
        }
    }

    return 0;
}