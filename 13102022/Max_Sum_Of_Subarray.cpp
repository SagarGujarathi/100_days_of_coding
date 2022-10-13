#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
void check(int array[], int size, int sub, int Max)
{
    int answer = 0;
    int count = 0;
    int pointer = -1;
    for (int i = 0; i < size; i++)
    {
        if (i < sub)
        {
            count += array[i];
        }
        else
        {
            if (count <= Max)
            {
                answer = max(answer, count);
            }
            pointer++;
            count = ((count - array[pointer]) + array[i]);
            if (count <= Max)
            {
                answer = max(answer, count);
            }
        }
    }
    cout << "Maximum sum of subarray : " << answer;
    return;
}
int main()
{
    int a, b, c;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }

    cout << endl
         << "Gimme size of subarray : ";
    cin >> b;
    cout << endl
         << "Gimme maximum sum of array : ";
    cin >> c;
    check(array, a, b, c);

    return 0;
}