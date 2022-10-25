//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int fillingBucket(int a)
    {
        if (a == 1 || a == 2)
        {
            return a;
        }
        int array[a];
        int mod = 100000000;
        array[0] = 1;
        array[1] = 2;
        for (int i = 2; i <= a; i++)     
        {
            array[i] = (array[i - 1] + array[i - 2]) % mod;
        }
        return array[a - 1];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends