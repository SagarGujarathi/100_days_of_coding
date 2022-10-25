#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    int a;
    cout << "Gimme number of works : ";
    cin >> a;
    vector<pair<int, int>> array(a);
    for (int i = 0; i < a; i++)
    {
        int f;
        int s;
        cout << endl
             << "Gimme start of time : ";
        cin >> f;
        cout << endl
             << "Gimme end of time : ";
        cin >> f;
        array.push_back({f, s});
    }
    for (int i = 0; i < a; i++)
    {
        cout << array[i].first << " " << array[i].second << endl;
    }

    return 0;
}