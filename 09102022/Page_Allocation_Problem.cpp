#include <iostream>
//#include <cmath>
#include <algorithm>
#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
bool possible(int array[], int size, int students, int middle)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > middle)
        {
            return false;
        }
        else if (array[i] + sum > middle)
        {
            count++;
            sum = array[i];
            if (count > students)
            {
                return false;
            }
        }
        else
        {
            sum += array[i];
        }
    }
    return true;
}
void check(int array[], int size, int students)
{
    if (size < students)
    {
        cout << "It's not possible!" << endl;
        return;
    }
    int start = 0;
    int end = 0;
    for (int i = 0; i < size; i++)
    {
        end += array[i];
    }
    int answer = INT_MAX;
    while (start < end)
    {
        int middle = (start + end) / 2;
        if (possible(array, size, students, middle))
        {
            answer = min(middle, answer);
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    cout << "answer : " << answer;
    return;
}
int main()
{
    int a, students;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    cout << endl
         << "Input " << a << " elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    cout << endl
         << "Number of students : ";
    cin >> students;
    check(array, a, students);

    return 0;
}