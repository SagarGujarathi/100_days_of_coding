#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
  int a;
  cout << "Gimme size of array : ";
  cin >> a;
  int array[a];
  cout << endl
       << "Input elements : ";
  for (int i = 0; i < a; i++)
  {
    cin >> array[i];
  }
  map<int, int> b;
  for (int i = 0; i < a; i++)
  {
    b[array[i]]++;
  }
  map<int, int>::iterator c;
  for (c = b.begin(); c != b.end(); c++)
  {
    cout << c->first << " " << c->second << endl;
  }

  return 0;
}