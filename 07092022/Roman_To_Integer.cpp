
#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;

int main()
{

    string s;
    cout << "Give Roman Inputs : ";
    cin >> s;
    int size = s.size();
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'I' && s[i + 1] == 'V' && i < size - 1)
        {
            count = count + 4;
            i++;
        }
        else if (s[i] == 'I' && s[i + 1] == 'X' && i < size - 1)
        {
            count = count + 9;
            i++;
        }
        else if (s[i] == 'X' && s[i + 1] == 'L' && i < size - 1)
        {
            count = count + 40;
            i++;
        }
        else if (s[i] == 'X' && s[i + 1] == 'C' && i < size - 1)
        {
            count = count + 90;
            i++;
        }
        else if (s[i] == 'C' && s[i + 1] == 'D' && i < size - 1)
        {
            count = count + 400;
            i++;
        }
        else if (s[i] == 'C' && s[i + 1] == 'M' && i < size - 1)
        {
            count = count + 900;
            i++;
        }

        else if (s[i] == 'I')
        {
            count = count + 1;
        }
        else if (s[i] == 'V')
        {
            count = count + 5;
        }
        else if (s[i] == 'X')
        {
            count = count + 10;
        }
        else if (s[i] == 'L')
        {
            count = count + 50;
        }
        else if (s[i] == 'C')
        {
            count = count + 100;
        }
        else if (s[i] == 'D')
        {
            count = count + 500;
        }
        else if (s[i] == 'M')
        {
            count = count + 1000;
        }
    }
    cout << count;

    return 0;
}