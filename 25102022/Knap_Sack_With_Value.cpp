#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    double x = a.first / a.second;
    double y = b.first / b.second;
    return x > y;
}
int main()
{
    int a;
    cout << "Number of items : ";
    cin >> a;
    vector<pair<int, int>> array(a);
    cout << endl
         << "Gimme inputs : value & weight : ";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i].first >> array[i].second;
    }
    int weight, cweight = 0;
    cout << endl
         << "Enter max weight : ";
    cin >> weight;
    sort(array.begin(), array.end(), compare);
    int answer = 0;
    for (int i = 0; i < a; i++)
    {
        if (cweight + array[i].second <= weight)
        {
            answer += array[i].first;
            cweight += array[i].second;
        }
    }
    cout << "Max value : " << answer;

    return 0;
}