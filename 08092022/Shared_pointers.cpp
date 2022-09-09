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
    shared_ptr<int> a = make_shared<int>(temp);
    cout << *a << endl;
    shared_ptr<int> b = a;
    cout << *b << endl; // shared pointers has many owners

    return 0;
}