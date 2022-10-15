#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int migratoryBirds(vector<int> arr)
{
    vector<int> a(5, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        a[arr[i] - 1]++;
    }
    int answer = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i > 0 && a[i] > a[answer - 1])
        {
            answer = i + 1;
        }
        else if (i == 0)
        {
            answer = i + 1;
        }
    }
    return answer;
}
int main()
{
    int a;
    cin >> a;
    cout << endl;
    vector<int> array(a);
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    cout << migratoryBirds(array);

    return 0;
}