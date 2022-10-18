#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    vector<int> c = {1, 2, 1, 2, 3, 4, 3};
    map<int, int> a;
    for (int i = 0; i < c.size(); i++)
    {
        a[c[i]]++;
    }
    map<int, int>::iterator b;
    for (b = a.begin(); b != a.end(); b++)
    {
        cout << b->first << " " << b->second << endl;
    }

    return 0;
}