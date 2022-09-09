#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
bool ascendingcompare(int c, int b)
{
    return c < b;
}
int sorting(int array[], bool (*compare)(int, int), int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (ascendingcompare(array[i], array[j]))
            {
                swap(array[i], array[j]);
            }
        }
    }
    return 1;
}

int main()
{
    int a;
    cout << "Size : ";
    cin >> a;
    cout << "Inputs : ";
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }

    bool (*compare)(int, int) = ascendingcompare;
    sorting(array, compare, a);
    for (int i = 0; i < a; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}