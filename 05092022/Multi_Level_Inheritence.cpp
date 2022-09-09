#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class a
{
    void apfn()
    {
        cout << "class a private " << endl;
    }

public:
    void afn()
    {
        cout << "class a public" << endl;
    }
};
class b : public a
{
public:
    void bfn()
    {
        cout << "class b public" << endl;
    }
};
class c : public b
{
public:
    void cfn()
    {
        cout << "class c public" << endl;
    }
};

int main()
{
    c obj;
    // obj.apfn();    this function will not work because it is private!
    obj.afn();
    obj.bfn();
    obj.cfn();

    return 0;
}