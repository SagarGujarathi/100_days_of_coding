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
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    cout << *(max_element(array, array + 7));

    return 0;
}