#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int b;
    cout << "Gimme number of works : ";
    cin >> b;
    vector<vector<int>> a;
    for (int i = 0; i < b; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        a.push_back({t1, t2});
        cout << endl;
    }

    sort(a.begin(), a.end(), [&](vector<int> a, vector<int> b)
         { return a[1] < a[1]; });
    int answer = 1;
    int end = a[0][1];
    for (int i = 1; i < a.size(); i++)
    {
        if (end <= a[i][0])
        {
            answer++;
            end = a[i][0];
        }
    }
    cout << "Answer : " << answer;

    return 0;
}