#include <iostream>
//#include<cmath>
#include <algorithm>
//#include<climits>
#include <vector>

using namespace std;

int main()
{
    int a;
    cout << "Gimme array size : ";
    cin >> a;
    vector<int> array(a);
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    for (int i = 0; i < a; i++)
    {
        cout << array[i];
    }

    return 0;
}