#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <climits>
#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl
         << "Input " << a << " elements : ";
    vector<int> array(a);
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    int temp = array[0];
    int answer = 0;
    for (int i = 1; i < a; i++)
    {
        temp += array[i];
        answer += temp;
    }
    cout << "Answer : " << answer;

    return 0;
}