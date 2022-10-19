#include <iostream>
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
    int a;
    cout << "Gimme a number : ";
    cin >> a;
    while (a != 0)
    {
        cout << a % 10;
        a = a / 10;
    }

    return 0;
}