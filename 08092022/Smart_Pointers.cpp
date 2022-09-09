#include <iostream>
#include <memory>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;

int main()
{
    int temp = 10;
    unique_ptr<int> a = make_unique<int>(temp);
    cout << *a << endl;
    // unique_pointer<int> b = a; //this will not work because unique pointers has only 1 owner.
    // instead make:
    unique_ptr<int> b = move(a); // this works

    cout << *b;

    return 0;
}