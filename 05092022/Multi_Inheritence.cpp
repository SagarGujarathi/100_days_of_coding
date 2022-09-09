#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class a
{
private:
    void apfn()
    {
        cout << "I'm function from private!" << endl;
    }

public:
    void afn()
    {
        cout << "I'm function from public(a)" << endl;
    }
};
class b
{
public:
    void bfn()
    {
        cout << "I'm function from public(b)" << endl;
    }
};
class c : public b, public a
{
public:
    void cfn()
    {
        cout << "I'm function from class c" << endl;
    }
};

int main()
{
    c obj;

    obj.afn();
    obj.bfn();
    obj.cfn();

    return 0;
}