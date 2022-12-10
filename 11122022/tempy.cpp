#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 1; x <= t; x++)
    {
        int n, q;
        cin >> n >> q;
        vector<int> array(n);
        vector<pair<pair<int, int>, pair<int, int>>> query(q);
        vector<vector<int>> queries(10, vector<int>(3));
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            array[i] = a;
        }
        for (int i = 0; i < q; i++)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            query[i].first.first = a;
            query[i].first.second = b;
            query[i].second.first = c;
            query[i].second.second = d;
        }
        for (int i = 0; i < q; i++)
        {
            vector<int> temp1(array.begin() + query[i].first.first, array.begin() + query[i].first.second + 1);
            vector<int> temp2(array.begin() + query[i].second.first, array.begin() + query[i].second.second + 1);
            sort(temp1.begin(), temp1.end());
            sort(temp2.begin(), temp2.end());
            long long count = 0;
            for (int i = 0; i < temp1.size(); i++)
            {
                if (count > 1)
                {
                    cout << "No" << endl;
                    break;
                }
                if (temp1[i] != temp2[i])
                {
                    count++;
                }
            }
            cout << "Yes" << endl;
        }
    }
    return 0;
}