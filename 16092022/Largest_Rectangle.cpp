#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
#include <stack>
using namespace std;
void function(vector<int> a)
{
    int size = a.size();
    int count = 0;
    int Max = 0;
    stack<int> b;
    while (count < size)
    {
        while (!a.empty() && a[b.top()] > a[count])
        {
            int temp = a[b.top()];
            b.pop();
            if (b.empty())
            {
                Max = max(Max, temp * count);
            }
            else
            {
                Max = max(Max, count - b.top() - 1);
            }
        }

        b.push(count);
        count++;
    }
    cout << Max;
}
int main()
{
    int a;
    cout << "Input size of array : ";
    cin >> a;
    vector<int> array(a);
    cout << endl;
    cout << "Input elements : ";
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    function(array);

    return 0;
}