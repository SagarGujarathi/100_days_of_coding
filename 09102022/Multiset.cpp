#include <iostream>
#include <set>
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
    multiset<int> a;
    a.insert(1); // push 1
    a.insert(2); // push 2
    a.insert(2); // push 2
    a.insert(4); // push 4
    a.insert(5); // push 5   ! REPEATING ELEMENTS ARE ALLOWED IN THE MULTISET!
    a.insert(5);
    a.erase(2); // ERASES ALL TWO'S FROM THE SET!

    // TO PRINT SET ELEMENTS
    for (auto i : a)
    {
        cout << i << " ";
    }
    // TO ERASE ONLY 1 TWO, SEND THE POINTER.
    a.erase(a.find(5));
    cout << endl;
    for (auto i : a)
    {
        cout << i << " ";
    }   

    return 0;
}