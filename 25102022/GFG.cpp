#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    int array[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    sort(array, array + 11, greater<int>());
    for (int i = 0; i < 11; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}