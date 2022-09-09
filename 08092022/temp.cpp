#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
void function(int *&a)
{
    *a = *a + 2;
    cout << *a << endl;
}

int main()
{
    int a = 10;
    int *b = &a;
    function(b);
    cout << *b;

    return 0;
}