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
    int a;
    cout << "Gimme size : ";
    cin >> a;
    vector<int> array;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        array.push_back(x);
    }
    sort(array.begin(), array.end());
    int weight;
    cout << "What is maximum weight : ";
    cin >> weight;
    int count = 0;
    int answer = 0;
    for (int i = 0; i < a; i++)
    {
        if (count + array[i] <= weight)
        {
            answer++;
            count += array[i];
        }
    }
    cout << "Answer : " << answer;

    return 0;
}