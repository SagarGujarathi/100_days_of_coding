//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int answer = 0;
    void test(vector<vector<int>> a, int m, int n)
    {
        if (m < 0 || n < 0)
        {
            return;
        }
        if (a[m][n] == 10)
        {
            answer++;
            return;
        }
        test(a, m, n - 1);
        test(a, m - 1, n);
    }
    long long int numberOfPaths(int m, int n)
    {
        vector<vector<int>> a(m, vector<int>(n, 0));
        a[0][0] = 10;
        test(a, m - 1, n - 1);
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
        cin >> m >> n;
        Solution ob;
        cout << ob.numberOfPaths(m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends