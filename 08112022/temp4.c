#include <stdio.h>
int main()
{
    int a, b;
    printf("Input a number : ");
    scanf("%d", &a);
    printf("Input another number : ");
    scanf("%d", &b);
    if (a % b == 0)
    {
        printf("a divisible by b!");
    }
    else
    {
        printf("a cannot divisible by b");
    }
    return 0;
}