

#include <iostream>

using namespace std;
class a
{
public:
    void afn()
    {
        cout << "I am an equilateral triangle" << endl;
    }
};
class b : public a
{
public:
    void bfn()
    {
        cout << "I am an isosceles triangle" << endl;
    }
};
class c : public b
{
public:
    void cfn()
    {
        cout << "I am a triangle" << endl;
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    c temp;
    temp.afn();
    temp.bfn();
    temp.cfn();
    return 0;
}
