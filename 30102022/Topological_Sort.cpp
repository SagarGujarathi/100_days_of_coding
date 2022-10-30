#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;
map<int, vector<int>> graph;
map<int, int> indeg;
queue<int> answer;
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
        indeg[v]++;
        if (indeg[u] == 0)
        {
            indeg[u] = 0;
        }
    }
    for (auto i : indeg)
    {
        if (i.second == 0)
        {
            answer.push(i.first);
        }
    }
    while (!answer.empty())
    {
        int first = answer.front();
        cout << first << " ";
        answer.pop();
        for (auto i : graph[first])
        {
            indeg[i]--;
            if (indeg[i] == 0)
            {
                answer.push(i);
            }
        }
    }
    return 0;
}