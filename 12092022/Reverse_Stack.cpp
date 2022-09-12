#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class stack
{
    int *array;
    int top;

public:
    stack(int value)
    {
        array = new int[value];
        top = -1;
        total = value;
    }
    int total;
    void push(int value)
    {
        if (top == total - 1)
        {
            cout << "Stack Overflowed!" << endl;
            return;
        }
        top++;
        array[top] = value;
        return;
    }
    void display(stack head)
    {
        int temp = 0;
        while (temp != head.total)
        {
            cout << head.array[temp] << " ";
            temp++;
        }
        cout << endl;
        return;
    }
    void reversing(stack head)
    {
        int temp = 0;
        while (temp != (head.total) / 2)
        {
            int temp1 = head.array[temp];
            head.array[temp] = head.array[head.total - 1 - temp];
            head.array[head.total - 1 - temp] = temp1;
            temp++;
        }
        return;
    }
};

int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    stack rev(a);
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        rev.push(temp);
    }
    rev.display(rev);
    rev.reversing(rev);
    rev.display(rev);
    return 0;
}
