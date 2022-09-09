
#include <iostream>
using namespace std;



int sort012(int a[], int n)
{
    long long int zero = 0;
    long long int one = 0;
    long long int two = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zero++;
        }
        else if (a[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (zero > 0)
        {
            a[i] = 0;
            zero--;
        }
        else if (one > 0)
        {
            a[i] = 1;
            one--;
        }
        else
        {
            a[i] = 2;
            two--;
        }
    }
    return 0;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}
