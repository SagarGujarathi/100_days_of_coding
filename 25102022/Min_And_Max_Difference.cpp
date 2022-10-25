#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl
         << "Input " << a << " elements : ";
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    sort(array, array + a);
    vector<int> b1;
    vector<int> b2;
    vector<int> c1;
    vector<int> c2;
    int mid = a / 2;
    for (int i = 0; i < a; i++)
    {
        if (i < mid)
        {
            b1.push_back(array[i]);
        }
        else
        {
            b2.push_back(array[i]);
        }
        if (i % 2 == 0)
        {
            c1.push_back(array[i]);
        }
        else
        {
            c2.push_back(array[i]);
        }
    }
    cout << endl
         << "Max difference : ";
    for (int i = 0; i < mid; i++)
    {
        cout << (b2[i] - b1[i]) << " ";
    }
    cout << endl
         << "Min difference : ";
    for (int i = 0; i < mid; i++)
    {
        cout << (c2[i] - c1[i]) << " ";
    }

    return 0;
}