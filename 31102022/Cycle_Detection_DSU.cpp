#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, int> parent;
map<int, int> size;
void iparent(int a)
{
    parent[a] = a;
    size[a] = 1;
    return;
}
int sfind(int a)
{
    if (parent[a] == a)
    {
        return a;
    }
    return parent[a] = sfind(parent[a]);
}
void unions(int a, int b)
{
    a = sfind(a);
    b = sfind(b);
    if (a != b)
    {
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
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
    map<int, vector<int>> graph;
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[i].push_back(u);
        graph[i].push_back(v);
        iparent(u);
        iparent(v);
    }
    for (auto i : graph)
    {
        if (sfind(i.second[0]) == sfind(i.second[1]))
        {
            cout << "Cycle present!";
            return 0;
        }
        unions(i.second[0], i.second[1]);
    }
    cout << "No cycle present!";
    return 0;
}
