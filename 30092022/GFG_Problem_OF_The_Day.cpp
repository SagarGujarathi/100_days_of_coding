//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int safePos(int n, int k)
    {
        if (n == 1)
        {

            return 1;
        }

        return (safePos(n - 1, k) + k - 1) % n + 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;

        cin >> n >> k;

        Solution ob;
        cout << ob.safePos(n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends