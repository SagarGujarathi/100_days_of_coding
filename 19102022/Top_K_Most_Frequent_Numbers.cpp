#include <iostream>
#include <map>
#include <iterator>
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
    int a, b;
    cout << "Gimme size of array : ";
    cin >> a;
    int array[a];
    cout << endl
         << "Input elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    cout << endl
         << "Gimme value of k : ";
    cin >> b;
    if (b > a)
    {
        cout << endl
             << "Invalid!";
        return 0;
    }
    map<int, int> c;
    for (int i = 0; i < a; i++)
    {
        c[array[i]]++;
    }
    map<int, int> d;
    for (auto e : c)
    {
        d[e.second] = e.first;
    }
    map<int, int>::iterator it;
    it = d.end();
    it--;
    for (it; it != d.begin() && b > 0; it--)
    {
        cout << it->second << " : " << it->first << endl;
        b--;
    }

    return 0;
}