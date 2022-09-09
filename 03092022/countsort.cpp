#include <iostream>
#include <cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
void sorting(int array[], int a)
{
    int temp = 0;
    for (int i = 0; i < a; i++)
    {
        temp = max(array[i], temp);
    }
    int temparray[a + 1] = {0};
    int temparray1[a];

    for (int i = 0; i < a; i++)
    {

        temparray[array[i]]++;
    }
    for (int i = 1; i < a; i++)
    {
        temparray[i] += temparray[i - 1];
    }
    for (int i = a - 1; i > 0; i--)
    {

        temparray1[--temparray[array[i]]] = array[i];
    }
    for (int i = 0; i < a; i++)
    {
        array[i] = temparray1[i];
        cout << array[i];
    }
    return;
}

int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl;
    cout << "Gimme " << a << " Inputs : ";
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    sorting(array, a);

    return 0;
}