#include <iostream>
#include <map>
#include <iterator>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
bool iscycle(int a, map<int, vector<int>> graph, vector<bool> check)
{
    check[a] = true;
    for (auto i : graph[a])
    {

        if (check[i] == true)
        {
            return true;
        }
        else if (!check[i] && iscycle(i, graph, check))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int a, b;
    cout << "Number of nodes : ";
    cin >> a;
    cout << "Number of edges : ";
    cin >> b;
    map<int, vector<int>> graph;
    vector<bool> check(100, false);
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        check[u] = check[v] = false;
    }
    for (auto i : check)
    {
        if (!check[i] && iscycle(i, graph, check))
        {
            cout << "Cycle is present!";
            return 0;
        }
    }

    cout << "No cycle present!";

    return 0;
}