#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a;
    cout << "Input index : ";
    cin >> a;
    vector<long long> fib(a, -1);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < a; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[a - 1] << endl;

    return 0;
}