#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue(int size)
    {
        arr = new int[size];
        front = -1;
        back = -1;
        siz = size;
    }

    int siz;

    void push(int value)
    {
        if (back == siz)
        {
            cout << "Stack Overflowed!" << endl;
            return;
        }

        if (front == -1)
        {
            front++;
        }

        back++;
        arr[back] = value;
        return;
    }
    void pop(queue head)
    {
        if (head.front > back || head.front == -1)
        {
            cout << "No elements to delete!" << endl;
            return;
        }
        head.front++;
    }
    void peek(queue head)
    {
        if (head.front > head.back || head.front == -1)
        {
            cout << "No elements!" << endl;
            return;
        }
        cout << head.arr[head.front] << endl;
    }
    void empty(queue head)
    {
        if (head.front > head.back || head.front == -1)
        {
            cout << "It's empty!" << endl;
            return;
        }
        cout << "It's not empty!" << endl;
    }
    void display(queue head)
    {
        if (head.front == -1 || head.front > head.back)
        {
            cout << "No elements to  display!" << endl;
            return;
        }
        int temp = 0;
        while (temp != head.back + 1)
        {
            cout << head.arr[temp] << " ";
            temp++;
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

    queue test(a);
    test.push(1);
    test.push(2);
    test.push(3);
    // test.enqueue(test, 4);
    // test.enqueue(test, 5);
    // test.enqueue(test, 6);
    // test.enqueue(test, 7);
    // test.enqueue(test, 8);
    // test.enqueue(test, 9);
    // test.enqueue(test, 10);
    test.empty(test);
    test.display(test);

    return 0;
}