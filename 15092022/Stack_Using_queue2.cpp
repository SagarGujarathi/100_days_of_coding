#include <iostream>
#include <queue>
//#include<cmath>
#include <algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class Q
{
    queue<int> a;
    queue<int> b;

public:
    void enqueue(int value)
    {
        b.push(value);
        return;
    }
    void dequeue()
    {
        if (b.size() == 0)
        {
            cout << "Nothing to pop out!" << endl;
            return;
        }

        while (b.size() != 1)
        {
            a.push(b.front());
            b.pop();
        }
        b.pop();
        swap(a, b);
        return;
    }
    void display()
    {
        if (b.size() == 0)
        {
            cout << "Nothing to display!" << endl;
            return;
        }

        a = b;
        while (!b.empty())
        {
            cout << b.front() << " ";
            b.pop();
        }
        return;
    }
};

int main()
{
    Q temp;
    temp.enqueue(1);
    temp.enqueue(2);
    temp.enqueue(3);
    temp.enqueue(4);
    temp.enqueue(5);
    temp.enqueue(6);
    temp.enqueue(7);
    temp.enqueue(8);
    temp.enqueue(9);
    temp.enqueue(10);
    temp.dequeue();
    temp.display();

    return 0;
}