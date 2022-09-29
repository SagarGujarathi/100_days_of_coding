#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
#include <stack>
using namespace std;
void SS(int array[], int size)
{
    stack<pair<int, int>> a;
    cout << "Answer : ";
    for (int i = 0; i < size; i++)
    {
        int day = 1;
        while (!a.empty() && a.top().first <= array[i])
        {
            day += a.top().second;
            a.pop();
        }

        a.push({array[i], day});
        cout << day << " ";
    }
    return;
}
int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl
         << "Gimme inputs : ";
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    SS(array, a);

    return 0;
}