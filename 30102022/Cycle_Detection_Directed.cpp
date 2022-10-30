#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, vector<int>> graph;
map<int, bool> visit;
map<int, bool> stack;
bool cycle = false;
bool check(int a)
{
    stack[a] = true;
    if (!visit[a])
    {
        visit[a] = true;
        for (auto i : graph[a])
        {
            if (!visit[i] && check(i))
            {
                return true;
            }
            if (stack[i])
            {
                return true;
            }
        }
    }
    stack[a] = false;
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
        visit[u] = visit[v] = stack[u] = stack[v] = false;
    }
    for (auto i : visit)
    {
        if (!i.second && check(i.first))
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