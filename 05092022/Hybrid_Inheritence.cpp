#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class a
{
public:
    int i = 10;
};
class b : public a
{
public:
    int j = i + 10;
};
class c
{
public:
    int k = 10;
};
class HH : public b, public c
{
public:
    void print()
    {
        int final = j + k;
        cout << "Final value of i :" << final;
    }
};

int main()
{
    HH obj;
    obj.print();

    return 0;
}