#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
bool code(pair<int, int> a, pair<int, int> b)
{
    double x = a.first / a.second;
    double y = b.first / b.second;
    return x < y;
}
int main()
{
    int a;
    cout << "Number of fuel stations : ";
    cin >> a;
    vector<pair<int, int>> array(a);
    cout << endl
         << "Input distance of fuel station from truck and fuel available there :";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i].first >> array[i].second;
    }
    sort(array.begin(), array.end(), code);
    int distance, fuel;
    cout << endl
         << "Distance between truck and city : ";
    cin >> distance;
    cout << endl
         << "How much fuel initially in truck : ";
    cin >> fuel;
    int travelled = 0;
    int answer = 0;
    for (int i = 0; i < a; i++)
    {
        if (fuel >= (array[i].first - travelled))
        {
            int j = i;
            while (fuel > (array[j].first - travelled) && j < a)
            {
                j++;
            }
            travelled += (array[j - 1].first - travelled);
            fuel = fuel - array[j - 1].first + array[j - 1].second;
            i = j;
            answer++;
        }
        else
        {
            cout << "Impossible to reach!";
            return 0;
        }
    }
    cout << "answer : " << answer;

    return 0;
}