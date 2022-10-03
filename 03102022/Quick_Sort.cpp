#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int partition(int array[], int start, int end)
{
    int pivot = array[end];
    int j = start - 1;
    for (int i = start; i < end; i++)
    {
        if (array[i] < pivot)
        {
            j++;
            swap(array[i], array[j]);
        }
    }
    swap(array[j + 1], array[end]);
    return j + 1;
}
void sorting(int array[], int start, int end)
{
    if (start < end)
    {
        int pivot = partition(array, start, end);
        sorting(array, start, pivot - 1);
        sorting(array, pivot + 1, end);
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
    cout << endl
         << "Sorted array : ";
    sorting(array, 0, a - 1);
    for (int i = 0; i < a; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}