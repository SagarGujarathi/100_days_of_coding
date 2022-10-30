#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, vector<int>> graph;
map<int, bool> visit;
void dfs(int a)
{
    visit[a] = true;
    cout << a << " ";
    for (auto i : graph[a])
    {
        if (!visit[i])
        {
            dfs(i);
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
        visit[u] = visit[v] = false;
    }
    dfs(x);

    return 0;
}