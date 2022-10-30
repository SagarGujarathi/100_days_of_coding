#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, vector<int>> graph;
map<int, bool> visit;
bool cycle = false;
bool check(int a, int parent)
{
    visit[a] = true;
    for (auto i : graph[a])
    {
        if (i != parent && (!visit[i] && check(i, a) || visit[i]))
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
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        visit[u] = visit[v] = false;
    }
    for (auto i : visit)
    {
        if (!i.second && check(i.first, -1))
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }

    return 0;
}