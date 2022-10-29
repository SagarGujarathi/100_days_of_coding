//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long answer = 0;
        int pointer = 0;
        for (int i = 0; i < n; i++)
        {
            answer += arr[i];
            if (answer > s)
            {
                while (answer > s && pointer < i)
                {
                    answer -= arr[pointer];
                    pointer++;
                }
            }
            if (answer == s)
            {

                vector<int> a(2);
                a[0] = pointer + 1;
                a[1] = i + 1;
                return a;
            }
        }
        vector<int> a(1);
        a[0] = -1;
        return a;
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
        long long s;
        cin >> n >> s;
        int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends