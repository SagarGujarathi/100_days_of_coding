#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
void TSP(vector<int> array, int target, int size)
{
    sort(array.begin(), array.end());

    for (int i = 0; i < size; i++)
    {
        int low = i + 1;
        int high = size - 1;
        while (low < high)
        {
            int temp = (array[i] + array[low] + array[high]);
            if (temp == target)
            {
                cout << "Sum of " << array[i] << " + " << array[low] << " + " << array[high] << " = " << temp << endl;
                cout << "Target found!";
                return;
            }
            else if (temp < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    cout << "Target not found!";
    return;
}
int main()
{
    int a, b;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl
         << "Input elements : ";
    vector<int> array;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    cout << endl
         << "Target : ";
    cin >> b;
    TSP(array, b, a);

    return 0;
}