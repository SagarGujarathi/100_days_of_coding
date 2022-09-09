#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class student
{
public:
    string username;
    int age;
    bool gender;
};

int main()
{
    int a;
    cout << "Inputs total no. of students : ";
    cin >> a;
    student array[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Name of student : ";
        cin >> array[i].username;
        cout << endl
             << "Age of student : ";
        cin >> array[i].age;
        cout << endl
             << "Gender of student : ";
        cin >> array[i].age;
    }
    for (int i = 0; i < a; i++)
    {
        cout << "Name of student : ";
        cout << array[i].username;
        cout << endl
             << "Age of student : ";
        cout << array[i].age;
        cout << endl
             << "Gender of student : ";
        cout << array[i].age;
    }

    return 0;
}