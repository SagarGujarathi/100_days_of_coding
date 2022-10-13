#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
void check(int array[], int size, int divisor, int Max)
{
    int pointer = 0;
    int count = 0;
    for (int i = 0; i <= size; i++)
    {
        if (i < Max)
        {
            count += array[i];
        }
        else
        {
            if (count % divisor == 0)
            {
                for (int j = pointer; j < i; j++)
                {
                    cout << array[j] << " ";
                }
                cout << endl;
            }
            count = count - array[pointer] + array[i];
            pointer++;
        }
    }
    return;
}
int main()
{
    int a, b, c;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    cout << endl
         << "Input elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    cout << endl
         << "Gimme a number which is dividing : ";
    cin >> b;
    cout
        << endl
        << "Gimme size of subarray : ";
    cin >> c;
    check(array, a, b, c);

    return 0;
}