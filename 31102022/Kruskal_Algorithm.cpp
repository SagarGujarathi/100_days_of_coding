#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
map<int, int> parent;
map<int, int> size;
void mparent(int a)
{
    parent[a] = a;
    size[a] = 1;
}
int fparent(int a)
{
    if (parent[a] == a)
    {
        return a;
    }
    return parent[a] = fparent(parent[a]);
}
void Union(int a, int b)
{
    a = fparent(a);
    b = fparent(b);
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
    vector<vector<int>> graph;
    for (int i = 0; i < b; i++)
    {
        int w, u, v;
        cin >> w >> u >> v;
        graph.push_back({w, u, v});
        mparent(u);
        mparent(v);
    }
    sort(graph.begin(), graph.end());
    int cost = 0;
    for (int i = 0; i < b; i++)
    {
        int a = graph[i][0];
        int b = graph[i][1];
        int c = graph[i][2];
        if (fparent(b) != fparent(c))
        {
            cout << b << "-" << c << endl;
            cost += a;
            Union(b, c);
        }
    }

    return 0;
}