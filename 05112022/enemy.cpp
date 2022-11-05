//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int count = 0;
    int a, b;
    vector<vector<int>> array;
    void code(int i, int j)
    {
        if (i < 0 || i > a - 1 || j < 0 || j > b - 1 || array[i][j] == 1)
        {
            return;
        }
        array[i][j] = 1;
        count++;
        code(i + 1, j);
        code(i - 1, j);
        code(i, j - 1);
        code(i, j + 1);
    }
    int largestArea(int n, int m, int k, vector<vector<int>> &enemy)
    {
        if (k == 0)
        {
            return n * m;
        }
        a = n;
        b = m;
        array = vector<vector<int>>(n, vector<int>(m, 0));
        for (auto i : enemy)
        {
            for (int j = 0; j < m; j++)
            {
                array[i[0] - 1][j] = 1;
            }
            for (int j = 0; j < n; j++)
            {
                array[j][i[1] - 1] = 1;
            }
        }
        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (array[i][j] == 0)
                {
                    code(i, j);
                    answer = max(answer, count);
                    count = 0;
                }
            }
        }
        return answer;
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
        int k;
        cin >> k;
        vector<vector<int>> e(k, vector<int>(2));
        for (int i = 0; i < k; i++)
            cin >> e[i][0] >> e[i][1];
        Solution a;
        cout << a.largestArea(n, m, k, e) << endl;
    }
    return 0;
}
// } Driver Code Ends