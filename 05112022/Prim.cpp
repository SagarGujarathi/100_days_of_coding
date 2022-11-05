#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;
map<int, vector<int>> graph;
map<int, int> parent;
map<int, int> dis;
map<int, bool> visit;
int cost = 0;
void mst(int a)
{
    set<vector<int>> array;
    dis[a] = 0;
    array.insert({0, a});
    while (!array.empty())
    {
        auto x = *(array.begin());
        visit[x[1]] = true;
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout << u << " " << v << " " << w << endl;
        cost += w;
        for (auto i : graph[u])
        {
            if (visit[x[i]])
            {
                continue;
            }
            if (dis[i] > i[1])
            {

            }
        }
    }
}
int main()
{
    int a, b;
    cout << "Nodes : ";
    cin >> a;
    cout << "Edges : ";
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int w, u, v;
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
        graph[u].push_back(v);
        graph[v].push_back(w);
        graph[v].push_back(u);
        dis[u] = dis[v] = 100000;
    }

    return 0;
}