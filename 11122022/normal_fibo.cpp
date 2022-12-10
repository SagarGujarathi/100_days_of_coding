#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <map>
using namespace std;
vector<long long> array;
long long fib(int a)
{
    if (array[a] != -1)
    {
        return array[a];
    }
    return array[a] = fib(a - 1) + fib(a - 2);
}
int main()
{
    int a;
    cout << "Gimme a number : ";
    cin >> a;
    array = vector<long long>(a, -1);
    array[0] = 0;
    array[1] = 1;
    cout << fib(a - 1);

    return 0;
}