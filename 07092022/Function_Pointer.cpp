#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
int fn()
{
    return 5;
}

int main()
{
    int (*function)() = fn;
    cout << function();

    return 0;
}