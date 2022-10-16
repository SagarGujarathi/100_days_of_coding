#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
void check(int array[], int a)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += array[i];
        if (sum > 0)
        {
            while (sum > 0 && start < i)
            {
                sum -= array[start];
                start++;
            }
        }
        if (sum == 0)
        {
            cout << start << " - " << i << endl;
        }
    }
    return;
}
int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    cout << endl
         << "Input elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    check(array, a);

    return 0;
}