#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
// #include <vector>
using namespace std;
long long merging(int array[], int start, int middle, int end)
{
    long long inv = 0;
    int temp1[middle - start + 1];
    int temp2[end - middle];
    for (int i = 0; i < (middle - start + 1); i++)
    {
        temp1[i] = array[i + start];
    }
    for (int i = 0; i < (end - middle); i++)
    {
        temp2[i] = array[i + middle + 1];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (i < (middle - start + 1) && j < (end - middle))
    {
        if (temp1[i] < temp2[j])
        {
            array[k] = temp1[i];
            i++;
            k++;
        }
        else
        {
            array[k] = temp2[j];
            j++;
            k++;
            inv += ((middle - start) + (1 - i));
        }
        return inv;
    }
    while (i < (middle - start + 1))
    {
        array[k] = temp1[i];
        k++;
        i++;
    }
    while (j < (end - middle))
    {
        array[k] = temp2[j];
        k++;
        j++;
    }
    return inv;
}
long long sorting(int array[], int start, int end)
{
    long long inv = 0;
    if (start < end)
    {
        int middle = (start + end) / 2;
        inv += sorting(array, start, middle);
        inv += sorting(array, middle + 1, end);
        inv += merging(array, start, middle, end);
    }

    return inv;
}

int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    cout << sorting(array, 0, a - 1);

    return 0;
}