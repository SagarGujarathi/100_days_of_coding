#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int main()
{
    int array[] = {2000, 500, 200, 100, 50, 20, 10, 1};
    int a;
    cin >> a;
    int count = 0;
    int answer = 0;
    for (int i = 0; i < sizeof(array) / 4; i++)
    {
        if (count + array[i] <= a)
        {
            answer++;
        }
        while (count + array[i] <= a)
        {
            count += array[i];
        }
        if (count == a)
        {
            break;
        }   
    }
    cout << answer;

    return 0;
}