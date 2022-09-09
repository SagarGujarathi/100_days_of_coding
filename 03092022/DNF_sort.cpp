#include <iostream>
//#include<cmath>
#include <algorithm>
//#include<climits>
//#include<vector>
using namespace std;
void DNF(int array[], int a)
{
    int low = 0;
    int mid = 0;
    int high = a - 1;
    while (mid <= high)
    {
        if (array[mid] == 0)
        {
            swap(array[low], array[mid]);
            low++;
            mid++;
        }
        else if (array[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(array[mid], array[high]);
            high--;
        }
    }

    for (int i = 0; i < a; i++)
    {
        cout << array[i];
    }

    return;
}

int main()
{
    int a;
    cout << "Input size of array : ";
    cin >> a;
    int array[a];
    cout << endl;
    cout << "Input " << a << " 0 or 1 or 2's : ";
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 0 || temp == 1 || temp == 2)
        {
            array[i] = temp;
        }
        else
        {
            i--;
        }
    }
    DNF(array, a);

    return 0;
}