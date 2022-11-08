//{ Driver Code Starts
// link : https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to detect cycle in an undirected graph.
    bool check(int src, vector<int> adj[], vector<bool> &visit)
    {
        queue<pair<int, int>> array;
        visit[src] = true;
        array.push({src, -1});
        while (!array.empty())
        {
            int a = array.front().first;
            int b = array.front().second;
            array.pop();
            for (auto i : adj[a])
            {
                if (!visit[i])
                {
                    visit[i] = true;
                    array.push({i, a});
                }
                else if (i != b)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[])
    {
        vector<bool> visit(V, 0);
        for (int i = 0; i < V; i++)
        {
            if (!visit[i])
            {
                if (check(i, adj, visit))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends