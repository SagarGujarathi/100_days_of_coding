#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int a, b;
    cout << "Number of nodes : ";
    cin >> a;
    cout << "Number of edges : ";
    cin >> b;
    map<int, vector<int>> graph;
    vector<int> degree(a + b, 0);
    queue<int> c;
    cout << "Input node - edge : ";
    for (int i = 0; i < a; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        degree[v]++;
    }
    for (int i = 0; i < a; i++)
    {
        if (degree[i] == 0)
        {
            c.push(i);
        }
    }
    while (!c.empty())
    {
        int x = c.front();
        c.pop();
        cout << x << " ";
        for (auto i : graph[x])
        {
            degree[i]--;
            if (degree[i] == 0)
            {
                c.push(i);
            }
        }
    }

    return 0;
}