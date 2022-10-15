#include <iostream>
using namespace std;
void check(int array[], int size, int subsize)
{
    int answer = 0;
    int pointer = 0;
    for (int i = (subsize - 1); i < size; i++)
    {
        bool verify = true;
        int temp = 0;
        int temp = 0;
        for (int j = pointer; j <= (pointer + i) / 2; j++)
        {
            if (array[j] != array[i - temp])
            {
                verify = false;
                break;
            }
            temp++;
        }
        if (verify)
        {
            answer++;
        }
        pointer++;
    }
    cout << "Number of palindromes are : " << answer;
    return;
}
int main()
{
    int a, b;
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
         << "Gimme size of subarray : ";
    cin >> b;
    check(array, a, b);

    return 0;
}