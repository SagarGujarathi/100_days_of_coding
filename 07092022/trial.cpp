#include <iostream>
//#include<cmath>
#include <algorithm>
//#include<climits>
//#include<vector>
using namespace std;

int main()
{
    int array[] = {1, 4, 3};
    sort(array, (array + 3));
    for (int i = 0; i < 3; i++)
    {
        cout << array[i];
    }

    return 0;
}