//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        queue<pair<pair<int, int>, int>> check;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 2)
                {
                    check.push({{i, j}, 0});
                }
                if (grid[i][j] == 1)
                {
                    count++;
                }
            }
        }
        int a[] = {1, -1, 0, 0};
        int b[] = {0, 0, 1, -1};
        int time = 0;
        while (!check.empty())
        {
            int i = check.front().first.first;
            int j = check.front().first.second;
            int k = check.front().second;
            check.pop();
            time = max(k, time);
            for (int x = 0; x < 4; x++)
            {
                int p = i + a[x];
                int q = j + b[x];
                if (p >= 0 && q >= 0 && p < n && q < m && grid[p][q] == 1)
                {
                    count--;
                    grid[p][q] = 2;
                    check.push({{p, q}, k + 1});
                }
            }
        }
        if (count == 0)
        {
            return time;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(grid);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends