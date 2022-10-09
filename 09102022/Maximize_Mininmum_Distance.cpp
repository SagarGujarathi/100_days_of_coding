#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
bool feasible(int array[], int middle, int size, int k)
{
    int count = 1;
    int position = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] - position >= middle)
        {
            count++;
            position = array[i];
            if (count == k)
            {
                return true;
            }
        }
    }
    return false;
}
void check(int array[], int size, int k)
{
    sort(array, array + size);
    int answer = -1;
    int left = 1;
    int right = array[size - 1];
    while (left < right)
    {
        int middle = (left + right) / 2;
        if (feasible(array, middle, size, k))
        {
            answer = max(answer, middle);
            left = middle + 1;
        }
        else
        {
            right = middle;
        }
    }
    cout << "answer : " << answer;
    return;
}
int main()
{
    int a, k;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    cout << "Input " << a << " elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    cout << endl
         << "Input k : ";
    cin >> k;
    check(array, a, k);
    cout << endl;

    return 0;
}