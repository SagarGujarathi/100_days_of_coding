#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
void reversing(string a)
{
    int temp = a.length();
    while (temp != -1)
    {
        cout << a[temp];
        temp--;
    }
    return;
}

int main()
{
    string a;
    cout << "Gimme string : ";
    getline(cin, a);
    reversing(a);

    return 0;
}