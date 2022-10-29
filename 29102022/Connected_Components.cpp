#include <iostream>
#include <map>
#include <iterator>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
map<int, vector<int>> graph;
map<int, bool> check;
int code(int a)
{
    if (check[a])
    {
        return 0;
    }
    check[a] = true;
    int answer = 1;
    for (auto i : graph[a])
    {
        if (!check[i])
        {
            answer += code(i);
        }
    }
    return answer;
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
        cin >> u;
        cin >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        check[u] = check[v] = 0;
    }
    map<int, bool>::iterator i;
    for (i = check.begin(); i != check.end(); i++)
    {
        if (!i->second)
        {
            cout << code(i->first) << endl;
        }
    }

    return 0;
}