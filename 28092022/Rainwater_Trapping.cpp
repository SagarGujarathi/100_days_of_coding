#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
#include <stack>
using namespace std;
void capacity(vector<int> array, int size)
{
    int answer = 0;
    stack<int> a;
    for (int i = 0; i < size; i++)
    {
        while (!a.empty() && array[a.top()] < array[i])
        {
            int temp = a.top();
            a.pop();
            if (a.empty())
            {
                break;
            }
            answer += (min(array[a.top()], array[i]) - array[temp]) * (i - 1 - a.top());
        }
        a.push(i);
    }
    cout << answer;
    return;
}
int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl;
    cout << "Input elements : ";
    vector<int> array;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    capacity(array, a);

    return 0;
}