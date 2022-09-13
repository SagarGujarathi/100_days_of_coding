#include <iostream>
#include <stack>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class queue
{
    stack<int> a;
    stack<int> b;

public:
    void pushing(int value)
    {
        while (!b.empty())
        {
            a.push(b.top());
            b.pop();
        }
        a.push(value);
        return;
    }
    void poping()
    {
        while (!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        b.pop();
    }
    void peek()
    {
        while (!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        cout << "The first element is : " << b.top() << endl;
        return;
    }
    void display()
    {

        if (b.empty())
        {
            while (!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
        }

        while (!b.empty())
        {
            cout << b.top() << " ";
            a.push(b.top());
            b.pop();
        }
        return;
    }
};

int main()
{
    queue test;
    test.pushing(1);
    test.pushing(2);
    test.pushing(3);
    test.pushing(4);
    test.pushing(5);
    test.pushing(6);
    test.pushing(7);
    test.pushing(8);
    test.pushing(9);
    test.pushing(10);
    test.peek();
    test.display();
    return 0;
}