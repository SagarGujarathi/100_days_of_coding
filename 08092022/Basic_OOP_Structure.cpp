#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>

using namespace std;
class player
{
public:
    string name;
    string game;
    int age;
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Game : " << game << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    player sagar;
    sagar.name = "sagar";
    sagar.game = "c++";
    sagar.age = 18;
    sagar.print();

    return 0;
}