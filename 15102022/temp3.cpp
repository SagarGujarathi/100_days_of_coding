#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int answer = 0;
bool check = false;
void shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                  pair<int, int> destination, int count = 0)
{
    if (source.first > 2 || source.second > 2 || source.first < 0 || source.second < 0)
    {
        return;
    }
    if (source.first == destination.first && source.second == destination.second)
    {
        answer = min(answer, count);
        check = true;
        return;
    }
    if (grid[source.first][source.second + 1] != 0)
    {
        source.second++;
        shortestPath(grid, source, destination, count + 1);
    }
    if (grid[source.first + 1][source.second] != 0)
    {
        source.first++;
        shortestPath(grid, source, destination, count + 1);
    }
    if (grid[source.first][source.second - 1] != 0)
    {
        source.second--;
        shortestPath(grid, source, destination, count + 1);
    }
    if (grid[source.first - 1][source.second] != 0)
    {
        source.first--;
        shortestPath(grid, source, destination, count + 1);
    }
}
int main()
{
    int a, b;
    cout << "Gimme rows : ";
    cin >> a;
    cout << endl
         << "Gimme columns : ";
    cin >> b;
    vector<vector<int>> array = {
        {1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         int temp;
    //         cin >> temp;
    //         array[i][j] = temp;
    //     }
    // }

    pair<int, int> c;
    c.first = 0;
    c.second = 0;
    pair<int, int> d;
    d.first = 2;
    d.second = 2;
    shortestPath(array, c, d, 0);
    if (check)
    {
        cout << endl
             << answer;
    }
    else
    {
        cout << endl
             << "Not found!";
    }

    return 0;
}