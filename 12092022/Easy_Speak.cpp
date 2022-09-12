#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b;

        int count = 0;
        cin >> b;
        string c;
        cin >> c;

        for (int j = 0; j < b; j++)
        {

            if (c[j] != 'a' && c[j] != 'e' && c[j] != 'i' && c[j] != 'o' && c[j] != 'u')
            {
                count++;
                if (count >= 4)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {

                count = 0;
            }
        }
        if (count < 4)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
