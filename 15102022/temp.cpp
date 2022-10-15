//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                      pair<int, int> destination, int count = 0)
    {
        static int answer = 0;
        static bool check = false;
        if ((grid[source.first][source.second] != 1 && grid[source.first][source.second] != 0))
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
            source.second += 1;
            shortestPath(grid, source, destination, count + 1);
        }
        if (grid[source.first + 1][source.second] != 0)
        {
            source.first += 1;
            shortestPath(grid, source, destination, count + 1);
        }
        if (grid[source.first][source.second - 1] != 0)
        {
            source.second -= 1;
            shortestPath(grid, source, destination, count + 1);
        }
        if (grid[source.first - 1][source.second] != 0)
        {
            source.first -= 1;
            shortestPath(grid, source, destination, count + 1);
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        obj.shortestPath(grid, source, destination);
    }
}

// } Driver Code Ends