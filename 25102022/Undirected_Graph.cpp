#include <iostream>
#include <unordered_map>
#include <list>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
unordered_map<int, list<int>> graph;
void display()
{
    for (auto i : graph)
    {
        cout << i.first << " -> ";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return;
}
int main()
{
    int u, v;
    bool dir = false;
    cout << "Gimme number of nodes : ";
    cin >> u;
    cout << "Gimme number of edges : ";
    cin >> v;
    cout << "undirected = 0 and directed = 1";
    cin >> dir;
    cout << "Input nodes and connections : ";
    for (int i = 0; i < v; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        graph[temp2].push_back(temp1);
        if (dir == 0)
        {
            graph[temp1].push_back(temp2);
        }
    }
    display();

    return 0;
}