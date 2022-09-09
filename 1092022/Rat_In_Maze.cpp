#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
int issafe(int **array, int row, int col, int a)
{
    if (row < a && col < a && array[row][col] == 1)
    {
        return true;
    }
    return false;
}
int inmaze(int **array, int **solution, int row, int col, int a)
{
    if (row == a - 1 && col == a - 1)
    {
        solution[row][col] = 1;
        return true;
    }
    if (issafe(array, row, col, a))
    {
        solution[row][col] = 1;
        if (inmaze(array, solution, row + 1, col, a))
        {
            return true;
        }
        if (inmaze(array, solution, row, col + 1, a))
        {
            return true;
        }
        solution[row][col] = 0;
        return false;
    }
    return false;
}

int main()
{
    int a;
    cout << "Gimme axa matrix : ";
    cin >> a;
    int **array = new int *[a];
    int **solution = new int *[a];
    for (int i = 0; i < a; i++)
    {
        array[i] = new int[a];
        solution[i] = new int[a];
        for (int j = 0; j < a; j++)
        {
            cin >> array[i][j];
            solution[i][j] = 0;
        }
    }
    if (inmaze(array, solution, 0, 0, a))
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << solution[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}