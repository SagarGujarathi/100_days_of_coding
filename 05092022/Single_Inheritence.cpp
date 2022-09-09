#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class a
{
public:
    void afn()
    {
        cout << "It's a class!" << endl;
    }
};
class b : public a
{
public:
    void bfn()
    {
        cout << "It's b class!" << endl;
    }
};

int main()
{
    b obj;
    obj.afn(); // here, we inherited a in b.
    obj.bfn(); // a= parent , b = child

    return 0;
}