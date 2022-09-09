#include <iostream>
//#include<cmath>
#include <algorithm>
//#include<climits>
//#include<vector>
using namespace std;
int piv(int array[], int start, int end)
{
    int pivot = array[end];
    int temp = start - 1;
    for (int i = start; i < end; i++)
    {
        if (array[i] < pivot)
        {
            temp++;
            swap(array[temp], array[i]);
        }
    }
    swap(array[temp + 1], array[end]);
    return temp + 1;
}
void sorting(int array[], int start, int end)
{
    if (start < end)
    {
        int pivot = piv(array, start, end);
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
    cout << endl;
    cout << "Input integers : ";
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    sorting(array, 0, a);

    for (int i = 0; i < a; i++)
    {
        cout << array[i];
    }

    return 0;
}