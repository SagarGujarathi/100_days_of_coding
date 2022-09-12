#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int l, w, c;
        cin >> l >> w >> c;
        long long int total = (2 * l + 2 * w) * c;
        cout << total << endl;
    }
    return 0;
}
