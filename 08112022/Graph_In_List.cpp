#include <iostream>
#include <map>
#include <vector>
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
    cout << "Gimme number of nodes : ";
    cin >> a;
    cout << "Gimme number of edges : ";
    cin >> b;
    map<int, vector<int>> array;
    cout << "Input node - node : ";
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        array[u].push_back(v);
        array[v].push_back(u);
    }
    for (auto i : array)
    {
        cout << i.first << " - ";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}