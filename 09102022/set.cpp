#include <iostream>
#include <set>
//#include <iterator>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    set<int> a;
    a.insert(1); // push 1
    a.insert(2); // push 2
    a.insert(2); // push 2
    a.insert(4); // push 4
    a.insert(5); // push 5   ! NO REPEATING ELEMENTS IN THE SET!

    a.erase(2); // ERASES 2 FROM THE SET!

    // TO PRINT SET ELEMENTS
    for (auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}