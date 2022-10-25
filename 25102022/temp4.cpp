//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

vector<int> b(2, -1);
void search(int a[], int x, int low, int high)
{
    if (high > low)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
        {
            if (b[0] == -1 || b[0] > mid)
            {
                b[0] = mid;
            }
            else if (mid > b[mid])
            {
                b[1] = mid;
            }
        }
        if (x > a[mid])
        {
            search(a, x, mid + 1, high);
        }
        else
        {
            search(a, x, low, mid - 1);
        }
    }
    return;
}
vector<int> find(int arr[], int n, int x)
{
    search(arr, x, 0, n - 1);
    return b;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends