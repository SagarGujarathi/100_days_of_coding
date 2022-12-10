#include <iostream>
// #include <cmath>
// #include <algorithm>
// #include <climits>
#include <vector>
// #include <queue>
// #include <deque>
// #include <stack>
// #include <map>
using namespace std;
int answer = -1;
void code(int a, int b, int count, vector<vector<int>> array)
{

    if (a > array.size() - 1)
    {
        return;
    }
    for (int j = 0; j < 3; j++)
    {
        if (j == b)
        {
            continue;
        }
        code(a + 1, j, count + array[a][b], array);
    }
    answer = max(answer, count);
    return;
}
int main()
{

    return 0;
}