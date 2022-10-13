#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
void check(int array[], int size, int Max)
{
    int answer = 1000;
    int count = 0;
    int pointer = 0;
    for (int i = 0; i < size; i++)
    {
        if (count < Max)
        {
            count += array[i];
        }
        else
        {
            answer = min(answer, i - pointer);
            while (count > Max)
            {
                count = count - array[pointer];
                pointer++;
            }
        }
    }
    cout << "Minimum subarray size : " << answer;
    return;
}
int main()
{
    int a, c;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    cout << endl
         << "Gimme maximum sum of array : ";
    cin >> c;
    check(array, a, c);

    return 0;
}