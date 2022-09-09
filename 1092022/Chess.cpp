#include <iostream>
using namespace std;
bool safe(int **array, int x, int y, int a)
{
    int row = x;
    int col = y;
    for (int i = 0; i < row; i++)
    {
        if (array[i][col] == 1)
        {
            return false;
        }
    }
    while (row >= 0 && col >= 0)
    {
        if (array[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while (col < a && row >= 0)
    {
        if (array[row][col] == 1)
        {
            return false;
        }
        col++;
        row--;
    }
    return true;
}
bool queen(int **array, int x, int a)
{
    if (x >= a)
    {
        return true;
    }
    for (int i = 0; i < a; i++)
    {

        if (safe(array, x, i, a))
        {
            array[x][i] = 1;
            if (queen(array, x + 1, a))
            {
                return true;
            }
            array[x][i] = 0;
        }
    }
    return false;
}

int main()
{
    int a;
    cout << "Gimme size of axa matrix : ";
    cin >> a;
    cout << endl
         << "Output : " << endl;

    int **array = new int *[a];
    for (int i = 0; i < a; i++)
    {
        array[i] = new int[a];
        for (int j = 0; j < a; j++)
        {
            array[i][j] = 0;
        }
    }

    if (queen(array, 0, a))
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
    else
    {
        cout << "It's impossible!";
    }

    return 0;
}