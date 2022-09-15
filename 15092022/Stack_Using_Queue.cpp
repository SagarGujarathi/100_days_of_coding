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
    int count = 0;
    void insert(int value)
    {
        count++;
        b.push(value);
        while (a.empty() == 0)
        {
            b.push(a.front());
            a.pop();
        }
        swap(a, b);
        return;
    }
    void popping()
    {
        if (count == 0)
        {
            cout << "Nothing to pop out!" << endl;
            return;
        }
        a.pop();
        count--;
    }
    void display()
    {
        if (count == 0)
        {
            cout << "Noting to display!" << endl;
            return;
        }

        for (int i = 0; i < count; i++)
        {
            b = a;
            for (int j = 0; j < count - i - 1; j++)
            {
                b.pop();
            }
            cout << b.front() << " ";
        }
        return;
    }
};

int main()
{
    Q temp;
    temp.insert(1);
    temp.insert(2);
    temp.insert(3);
    temp.insert(4);
    temp.insert(5);
    temp.display();

    return 0;
}