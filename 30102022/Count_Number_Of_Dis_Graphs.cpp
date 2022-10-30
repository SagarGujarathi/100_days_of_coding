#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, vector<int>> graph;
map<int, bool> visit;
void bfs(int a)
{
    visit[a] = true;
    for (auto i : graph[a])
    {
        if (!visit[i])
        {
            bfs(i);
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
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        visit[u] = visit[v] = false;
    }
    int count = 0;
    for (auto i : visit)
    {
        if (!i.second)
        {
            count++;
            bfs(i.first);
        }
    }
    cout << "Number of disconnected graphs : " << count;
    return 0;
}