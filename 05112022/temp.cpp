//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<string> answer;
    void pathing(vector<vector<int>> &array, vector<string> count, int n, int row, int col, char a)
    {
        if (array[row][col] == 0 || (row == n - 1 && col == n - 1) || (array[row][col] != 0 && array[row][col] != -1))
        {
            answer = count;
            return;
        }
        array[row][col] = -1;
        count[0] = count[0] + a;
        if (row + 1 < n)
        {
            pathing(array, count, n, row + 1, col, 'D');
        }
        if (row - 1 >= 0)
        {
            pathing(array, count, n, row - 1, col, 'U');
        }
        if (col + 1 < n)
        {
            pathing(array, count, n, row, col + 1, 'R');
        }
        if (col - 1 >= 0)
        {
            pathing(array, count, n, row, col - 1, 'L');
        }
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> count;
        pathing(m, count, n, 0, 0, 'h');
        if (answer.size() >= 1)
        {
            return answer;
        }
        return {"-1"};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends