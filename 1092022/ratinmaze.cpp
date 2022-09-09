#include <iostream>
using namespace std;
bool safe(int **array, int x, int y, int a)
{
    if (x < a && y < a && array[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool inmaze(int **array, int x, int y, int a, int **solution)
{
    if (x == a - 1 && y == a - 1)
    {
        solution[x][y] = 1;
        return true;
    }

    if (safe(array, x, y, a))
    {
        solution[x][y] = 1;
        if (inmaze(array, x + 1, y, a, solution))
        {
            return true;
        }
        if (inmaze(array, x, y + 1, a, solution))
        {
            return true;
        }
        solution[x][y] = 0;
        return false;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a;
    cout << "Gimme axa matrix size : ";
    cin >> a;
    cout << endl;
    cout << "Input " << a * a << " value(only 1 and 0) : ";
    cout << endl;
    // creating input and output 2d array.
    int **array = new int *[a];
    int **solution = new int *[a];
    for (int i = 0; i < a; i++)
    {
        array[i] = new int[a];
        solution[i] = new int[a];
        for (int j = 0; j < a; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 1 || temp == 0)
            {
                array[i][j] = temp;
            }
            else
            {
                cout << "Wrong input!";
                return 0;
            }

            solution[i][j] = 0;
        }
    }
    if (inmaze(array, 0, 0, a, solution))
    {
        cout << "output : " << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << solution[i][j] << " ";
            }
            delete[] array[i];
            delete[] solution[i];
            cout << endl;
        }
    }
    else
    {
        cout << "it's impossible to solve!";
    }
    array = NULL;
    solution = NULL;

    return 0;
}