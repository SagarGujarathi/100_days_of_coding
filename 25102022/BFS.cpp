#include <iostream>
#include <unordered_map>
#include <queue>
#include <iterator>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <deque>
//#include <stack>
using namespace std;
queue<int> bfs;
unordered_map<int, vector<int>> graph;
unordered_map<int, bool> check;
void insert(int a)
{
    bfs.push(a);
    check[a] = true;
    while (!bfs.empty())
    {
        int node = bfs.front();
        cout << node << " ";
        bfs.pop();
        for (auto j : graph[node])
        {
            if (!check[j])
            {
                bfs.push(j);
                check[j] = true;
            }
        }
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
    cout << "Input node - edge : ";
    int x;
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        if (i == 0)
        {
            x = u;
        }
        graph[u].push_back(v);
        graph[v].push_back(u);
        check[u] = false;
        check[v] = false;
    }
    insert(x);

    return 0;
}