#include <iostream>
#include <queue>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class Q
{
    queue<int> a;
    queue<int> b;

public:
    int count;
    Q()
    {
        count = -1;
    }
    void pushing(int value)
    {
        b.push(value);
        count++;
        while (!a.empty())
        {
            b.push(a.front());
            a.pop();
        }
        swap(a, b);
        return;
    }
    void popping()
    {
        if (count == -1)
        {
            cout << "Nothing to pop out!" << endl;
            return;
        }

        a.pop();
        count--;
        return;
    }
};

int main()
{
    Q queue;
    queue.pushing(1);
    queue.pushing(2);
    queue.pushing(3);
    queue.pushing(4);
    queue.pushing(5);
    queue.pushing(6);
    queue.pushing(7);
    queue.pushing(8);
    queue.pushing(9);
    queue.pushing(10);

    return 0;
}