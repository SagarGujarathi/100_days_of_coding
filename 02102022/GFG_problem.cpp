//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minChar(string str)
    {
        int k = str.size() - 1;
        int count = 0;
        int i = 0;
        int j = str.size() - 1;

        while (i < j)
        {
            if (str[i] == str[j])
            {
                i++;
                j--;
            }
            else
            {
                i = 0;
                j = --k;
                count++;
            }
        }

        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends