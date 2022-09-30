#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
void CO(vector<int> array, int chance)
{
    int count = 0;
    int j = 0;
    int answer = 0;
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == 0)
        {
            count++;
        }
        if (count > chance)
        {
            count--;
            i++;
        }
        answer = max(answer, i - 1 - j);
    }
    cout << "Max subarray : " << answer;
    return;
}
int main()
{
    int a;
    int b;
    cout << "Gimme size of array : ";
    cin >> a;
    vector<int> array;
    cout << endl
         << "Input elements : ";
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    cout << endl
         << "Chances : ";
    cin >> b;
    CO(array, b);

    return 0;
}