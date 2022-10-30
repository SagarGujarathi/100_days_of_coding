#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a, b;
    cout << "Gimme number of nodes : ";
    cin >> a;
    cout << "Gimme number of edges : ";
    cin >> b;
    vector<vector<int>> array(a + 1, vector<int>(a + 1, 0));
    for (int i = 0; i < a; i++)
    {
        int u, v;
        cin >> u >> v;
        array[u][v] = 1;
        array[v][u] = 1;
    }
    for (auto i : array)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}