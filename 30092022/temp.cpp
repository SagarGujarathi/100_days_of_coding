#include <iostream>
// #include <cmath>
#include <algorithm>
// #include <climits>
//#include <vector>
//#include <queue>
// #include <deque>
//#include <stack>
using namespace std;
void DC(string a)
{
    string b;
    int answer = 0;
    for (int i = 0; i < a.length(); i++)
    {
        int temp;
        if (b.find(a[i]) < a.length() && b.length() != 0)
        {
            temp = b.length();
            answer = max(answer, temp);
            while (b.find(a[i]) < a.length() && b.length() != 0)
            {
                b = b.substr(1);
            }
        }
        b = b + a[i];
        temp = b.length();
        answer = max(answer, temp);
    }
    cout << answer;
    return;
}
int main()
{
    string a;
    cout << "Gimme string : ";
    cin >> a;
    DC(a);

    return 0;
}