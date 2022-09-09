#include <iostream>
// #include <cmath>
#include <algorithm>
// #include <climits>
// #include <vector>
using namespace std;
void sorting(int array[], int a)
{
    for (int i = 1; i < a; i += 2)
    {
        if (array[i] > array[i - 1])
        {
            swap(array[i], array[i - 1]);
        }
        if (array[i] > array[i + 1] && i <= a - 2)
        {
            swap(array[i], array[i + 1]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << array[i] << " ";
    }

    return;
}

int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl;
    cout << "Input integers : ";
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    sorting(array, a);

    return 0;
}