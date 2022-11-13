#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
#include <queue>
//#include <deque>
//#include <stack>
#include <map>
using namespace std;
void traverse(int a, map<int, bool> &visit, map<int, vector<int>> array)
{
    visit[a] = true;
    cout << a << " ";
    for (auto i : array[a])
    {
        if (!visit[i])
        {
            visit[i] = true;
            traverse(i, visit, array);
        }
    }
    return;
}
int main()
{
    int a, b;
    cout << "Gimme number of nodes : ";
    cin >> a;
    cout << "Gimme number of edges : ";
    cin >> b;
    cout << "Input node - node : ";
    map<int, bool> visit;
    map<int, vector<int>> array;
    for (int i = 0; i < b; i++)
    {
        int u, v;
        cin >> u >> v;
        array[u].push_back(v);
        array[v].push_back(u);
    }
    cout << "Starting of traverse : ";
    int x;
    cin >> x;
    traverse(x, visit, array);

    return 0;
}