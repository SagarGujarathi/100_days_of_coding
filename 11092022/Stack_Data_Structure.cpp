#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
#define n ;
using namespace std;
class stack
{
    int *arr;
    int top;

public:
    stack(int value)
    {
        arr = new int[value];
        top = -1;
        total = value;
    }
    int total;
    void push(int value)
    {
        if (arr[top] == total - 1)
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
        if (top == total - 1)
        {
            cout << "No elements in stack!" << endl;
            return;
        }

        top--;
        return;
    }
    void empty()
    {
        if (top == total - 1)
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
        while (head.top != total - 1)
        {
            cout << arr[i] << " ";
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
    temp.push(1);
    temp.push(2);
    temp.push(3);
    temp.push(4);
    temp.push(5);
    temp.push(6);
    temp.push(7);
    temp.push(8);
    temp.push(9);
    temp.push(10);
    temp.display(temp);

    return 0;
}