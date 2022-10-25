#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int array[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d", array[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}