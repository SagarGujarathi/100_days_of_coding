#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    int a;
    cout << "Number of rows and cols : ";
    cin >> a;
    vector<vector<int>> array(a, vector<int>(a, 0));
    cout << "Gimme node and connection : ";
    for (int i = 0; i < a; i++)
    {
        int u, v;
        cin >> u >> v;
        array[u][v] = array[v][u] = 1;
    }
    for (auto i : array)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}