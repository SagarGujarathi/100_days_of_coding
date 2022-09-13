#include <iostream>
#include <queue>
#include <stack>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;

int main()
{
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    cout << a.front() << endl; // answer : 1 reason : oldest element in queue.
    cout << a.back() << endl;  // answer : 4 reason : newest element in queue
    a.pop();                   // pops oldest element  in the queue
    cout << a.front() << endl; // answer : 2 reason : oldest element in queue.
    stack<int> b;
    b.push(1);
    b.push(2);
    b.push(3);
    b.push(4);
    b.push(5);
    cout << b.top();

    return 0;
}