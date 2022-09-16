#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    vector<pair<int, int>> st;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int temp = i;
        while (!st.empty())
        {
            if (st.back().first >= arr[i])
            {
                temp = st.back().second;
                st.pop_back();
            }
            else
                break;
        }
        st.push_back(make_pair(arr[i], temp));
        for (auto x : st)
            ans = max(ans, x.first * (i - x.second + 1));
    }
    cout << ans << endl;
    return 0;
