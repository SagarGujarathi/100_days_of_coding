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
    player(string n, string g, int a)
    {
        name = n;
        game = g;
        age = a;
    }
    void print()
    {
        cout << "PRINTING INFO OF " << name << endl;
        cout << "Name : " << name << endl;
        cout << "Game : " << game << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    player sagar = player("sagar", "lifeafter", 18);
    player sampath = player("sampath", "lifeafter", 1);
    sagar.print();
    sampath.print();

    return 0;
}