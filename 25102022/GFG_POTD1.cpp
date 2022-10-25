//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *array, int n, int k)
    {
        vector<int> a;
        int mx = array[0];
        int pointer = 0;
        for (int i = 0; i < k; i++)
        {
            mx = max(mx, array[i]);
        }
        a.push_back(mx);
        for (int i = k; i < n; i++)
        {
            if (array[pointer] < mx)
            {
                if (array[i] <= mx)
                {
                    a.push_back(mx);
                }
                else
                {
                    mx = array[i];
                    a.push_back(mx);
                }
            }
            else
            {
                if (array[i] >= array[pointer])
                {
                    mx = array[i];
                    a.push_back(mx);
                }
                else
                {
                    int temp = *(max_element(array + pointer + 1, array + i + 1));
                    a.push_back(temp);
                    mx = temp;
                }
            }
            pointer++;
        }
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

        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends   