#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, vector<int>> graph;
map<int, int> color;
map<int, bool> visit;
bool bipart = true;
void check(int a, int col)
{
    if (color[a] != -1 && color[a] != col)
    {
        bipart = false;
        return;
    }
    color[a] = col;
    if (visit[a])
    {
        return;
    }
    visit[a] = true;
    for (auto i : graph[a])
    {
        check(i, col xor 1);
    }
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
        color[u] = color[v] = -1;
        visit[u] = visit[v] = false;
    }
    for (auto i : visit)
    {
        check(i.first, 1);
    }
    if (bipart)
    {
        cout << "It's bipartite!";
    }
    else
    {
        cout << "Not bipartite!";
    }

    return 0;
}