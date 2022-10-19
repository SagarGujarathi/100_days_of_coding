#include <iostream>

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)

bool isfeasible(int **a, int i, int j, int k)
{

    for (int row = 0; row < 9; row++)
    { // cond 1
        if (a[row][j] == k)
            return false;
    }
    for (int col = 0; col < 9; col++)
    { // cond2
        if (a[i][col] == k)
            return false;
    }

    // cond3

    int rowst = i / 3 * 3; // out of 3*3 box i/3 & j/3 tell you the pos of box in 3*3 box matrix and here box matrix is nothing but we divided 9*9 matrix to boxes
    int rowend = rowst + 3;
    int colst = j / 3 * 3;
    int colend = colst + 3;

    rep(row, rowst, rowend)
    {
        rep(col, colst, colend)
        {
            if (a[row][col] == k)
                return false;
        }
    }

    return true;
}

bool SudkoSolver(int **a, int i, int j)
{

    if (i == 9)
        return true;

    if (j == 9)
        return SudkoSolver(a, i + 1, 0);

    if (a[i][j])
        return SudkoSolver(a, i, j + 1);

    for (int k = 1; k <= 9; k++)
    {
        if (isfeasible(a, i, j, k))
        {
            a[i][j] = k;

            if (SudkoSolver(a, i, j + 1))
                return true;

            a[i][j] = 0;
        }
    }

    return false;
}

int main()
{

    int **a = new int *[9];

    for (int i = 0; i < 9; i++)
    {
        a[i] = new int[9];
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
        }
    }

    SudkoSolver(a, 0, 0);

    for (int i = 0; i < 9; i++)
    {
        int sum = 0;
        for (int j = 0; j < 9; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
}

/*
5 3 0 0 7 8 9 1 2
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 7
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
*/