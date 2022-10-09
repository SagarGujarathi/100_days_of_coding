#include <iostream>
#include <unordered_set>
//#include <iterator>
//#include <cmath>
// #include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    unordered_set<int> a;
    a.insert(5); // push 1
    a.insert(4); // push 2
    a.insert(3); // push 2
    a.insert(2); // push 4    THEY ARE NOT IN SORTED ORDER
    a.insert(2); // push 5   ! REPEATING ELEMENTS ARE NOT ALLOWED IN THE MULTISET!
    a.erase(2);  // ERASES ALL TWO'S FROM THE SET!

    // TO PRINT SET ELEMENTS
    for (auto i : a)
    {
        cout << i << " ";
    }
    // TO ERASE ONLY 1 TWO, SEND THE POINTER.
    return 0;
}