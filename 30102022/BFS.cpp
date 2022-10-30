#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;
map<int, vector<int>> graph;
map<int, bool> visit;
queue<int> answer;
void bfs(int a)
{
    answer.push(a);
    visit[a] = true;
    while (!answer.empty())
    {
        int first = answer.front();
        cout << first << " ";
        answer.pop();
        for (auto i : graph[a])
        {
            if (!visit[i])
            {
                bfs(i);
            }
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
    int x;
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        if (i == 0)
        {
            x = u;
        }
        graph[u].push_back(v);
        graph[v].push_back(u);
        visit[u] = visit[v] = false;
    }
    bfs(x);

    return 0;
}