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
map<int, vector<int>> graph;
map<int, int> color;
map<int, bool> check;
bool yes = true;
void bipart(int a, int b)
{
    if (color[a] != -1 && color[a] != b)
    {
        yes = false;
        return;
    }
    color[a] = b;
    if (check[a])
    {
        return;
    }
    check[a] = true;
    for (auto i : graph[a])
    {
        bipart(i, !b);
    }
    return;
}

int main()
{
    int a, b;
    cout << "Number of nodes : ";
    cin >> a;
    cout << "Number of edges : ";
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        check[u] = check[v] = false;
        color[u] = color[v] = -1;
    }
    for (auto i : check)
    {
        if (!i.second)
        {
            bipart(i.first, 0);
        }
    }
    if (yes)
    {
        cout << "Its bipartited!";
    }
    else
    {
        cout << "Not bipartited!";
    }
    return 0;
}