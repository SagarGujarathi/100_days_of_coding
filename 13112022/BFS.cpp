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
queue<int> check;
void traverse(int a, map<int, bool> &visit, map<int, vector<int>> &array)
{
    check.push(a);
    while (!check.empty())
    {
        int x = check.front();
        visit[x] = true;
        check.pop();
        cout << x << " ";
        for (auto i : array[x])
        {
            if (!visit[i])
            {
                visit[x] = true;
                check.push(i);
            }
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