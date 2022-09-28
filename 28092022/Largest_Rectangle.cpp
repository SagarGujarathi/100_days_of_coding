#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
#include <stack>
using namespace std;
void LR(vector<int> array, int size)
{
    int answer = 0;
    stack<int> a;
    for (int i = 0; i < size; i++)
    {
        while (!a.empty() && array[a.top()] > array[i])
        {
            int temp = array[a.top()];
            a.pop();
            if (a.empty())
            {
                answer = max(answer, temp * i);
                break;
            }
            answer = max(answer, temp * (i - 1 - a.top()));
        }
        a.push(i);
    }
    if (answer == 0)
    {
        answer = array[0];
        for (int i = 0; i < size - 1; i++)
        {
            answer = min(answer, array[i]);
        }
        answer = answer * size;
    }

    cout << answer;
    return;
}
int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl
         << "Input elements : ";
    vector<int> b;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    LR(b, a);

    return 0;
}