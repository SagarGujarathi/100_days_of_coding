//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    unsigned long long int noOfWays(unsigned long long int n)
    {
        // code here
        long long int temp = (n * (n - 1));
        temp = temp + 2;
        return temp;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n;
        cin >> n;
        Solution ob;
        cout << ob.noOfWays(n) << endl;
    }
    return 0;
}

// } Driver Code Ends