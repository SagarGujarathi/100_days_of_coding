#include <iostream>
#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    int a, b;
    cout << "Gimme number of nodes : ";
    cin >> a;
    cout << "Gimme number of edges : ";
    cin >> b;
    vector<vector<int>> array(b + 1, vector<int>(b + 1, 0));
    cout << "Input node - node : ";
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        array[u][v] = 1;
        array[v][u] = 1;
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