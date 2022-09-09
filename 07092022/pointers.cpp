#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int **array = new int *[a];
  for (int i = 0; i < a; i++)
  {
    array[i] = new int[a];
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < a; j++)
    {
      array[i][j] = i * j;
      cout << array[i][j] << endl;
    }
    delete[] array[i];
  }
  delete[] array;
  array = NULL;

  return 0;
}