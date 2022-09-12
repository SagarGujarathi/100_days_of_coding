#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>

using namespace std;
class stack
{
    int *arr;
    int top;

public:
    stack(int value)
    {
        arr = new int[value + 1];
        top = -1;
        total = value;
    }
    int total;
    void push(int value)
    {
        if (top == total)
        {
            cout << "Stack Overflowed!" << endl;
            return;
        }
        top++;
        arr[top] = value;
        return;
    }
    void pop()
    {
        if (top == total)
        {
            cout << "No elements in stack!" << endl;
            return;
        }

        top--;
        return;
    }
    void empty()
    {
        if (top == -1)
        {
            cout << "It's empty!" << endl;
            return;
        }
        cout << "It's not empty!" << endl;
        return;
    }
    void display(stack head)
    {
        int i = 0;
        while (i != head.total)
        {
            cout << head.arr[i] << " ";
            i++;
        }
        cout << endl;
        return;
    }
};

int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl;
    stack temp(a);
    for (int i = 0; i < a; i++)
    {
        int a;
        cin >> a;
        temp.push(a);
    }

    temp.empty();
    temp.display(temp);

    return 0;
}