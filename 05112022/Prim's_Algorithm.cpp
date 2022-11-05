#include <iostream>
#include <map>
using namespace std;
map<int, pair<int, int>> graph;
map<int, int> distance;
map<int, int> parent;
int main()
{
    int a, b;
    cout << "Number of nodes : ";
    cin >> a;
    cout << "Number of edges : ";
    cin >> b;
    cout << "Input in format of weight - node - node";
    for (int i = 0; i < b; i++)
    {
        int w, u, v;
        cin >> w >> u >> v;
        graph[u] = {v, w};
        graph[v] = {u, w};
        distance[u] = 100;
        distance[v] = 100;
        parent[u] = u;
        parent[v] = v;
    }

    return 0;
}