#include <iostream>
#include <cmath>
using namespace std;
void check(int a)
{
    int sum = 0;
    while (sum < a)
    {
    }
}
void perfect(int array[], int size, int subsize)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
    }
}
int main()
{
    int a, b;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    cout << endl
         << "Gimme size of subarray : ";
    cin >> b;
    perfect(array, a, b);

    return 0;
}