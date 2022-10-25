#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <deque>
//#include <stack>
using namespace std;
unordered_map<int, vector<int>> map;
unordered_map<int, bool> check;
void insert(int a)
{
    check[a] = true;
    cout << a << " ";
    for (auto i : map[a])
    {
        if (!check[i])
        {
            insert(i);
        }
    }
    return;
}
int main()
{
    int a;
    cout << "Gimme number of edges : ";
    cin >> a;
    cout << "Input node - edge : ";
    int x;
    for (int i = 0; i < a; i++)
    {
        int u, v;
        cin >> u >> v;  
        if (i == 0)
        {
            x = u;
        }
        map[u].push_back(v);
        map[v].push_back(u);
        check[u] = check[v] = false;
    }
    insert(x);

    return 0;
}