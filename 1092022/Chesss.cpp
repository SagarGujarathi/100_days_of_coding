#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
bool issafe(int **array, int row, int col, int a)
{
    for (int i = 0; i < row; i++)
    {
        if (array[i][col] == 1)
        {
            return false;
        }
    }
    int i = row;
    int j = col;
    while (i > 0 && j > 0)
    {
        if (array[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }
    i = row;
    j = col;
    while (i > 0 && j < a)
    {
        if (array[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }
    return true;
}
bool fn(int **array, int row, int a)
{
    if (row >= a)
    {
        return true;
    }
    for (int i = 0; i < a; i++)
    {
        if (issafe(array, row, i, a))
        {
            array[row][i] = 1;

            if (fn(array, row + 1, a))
            {
                return true;
            }
            array[row][i] = 0;
        }
    }
    return false;
}

int main()
{
    int a;
    cout << "Gimme size : ";
    cin >> a;
    int **array = new int *[a];
    for (int i = 0; i < a; i++)
    {
        array[i] = new int[a];
        for (int j = 0; j < a; j++)
        {
            array[i][j] = 0;
        }
    }
    if (fn(array, 0, a))
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}