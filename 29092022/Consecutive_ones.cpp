#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
void CO(vector<int> array, int size)
{
    int temp = 0;
    int m1 = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == 1)
        {
            temp++;
        }
        else
        {
            m1 = max(m1, temp);
            temp = 0;
        }
    }
    cout << "Maximum subarray of 1's : " << m1;
    return;
}
int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl
         << "Input elements : ";
    vector<int> array;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        if (temp != 1 || temp != 0)
        {
            cout << "wrong input" << endl;
            return 0;
        }
        array.push_back(temp);
    }
    CO(array, a);

    return 0;
}