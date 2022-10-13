#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
void peak(int array[], int size, int low, int high)
{
  int middle = (low + high) / 2;
  if ((middle == 0 || array[middle - 1] <= array[middle]) && (middle == size - 1 || array[middle + 1] <= array[middle]))
  {
    cout << middle;
    return;
  }
  else if (middle > 0 && array[middle - 1] > array[middle])
  {
    peak(array, size, low, middle - 1);
  }
  else
  {
    peak(array, size, middle + 1, high);
  }
}
int main()
{
  int a;
  cout << "Gimme size of array : ";
  cin >> a;
  int array[a];
  cout << endl
       << "Input elements :";
  for (int i = 0; i < a; i++)
  {
    cin >> array[i];
  }
  peak(array, a, 0, a - 1);

  return 0;
}