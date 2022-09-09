#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class players
{
private:
    string playername;

public:
    void pname(string name)
    {
        playername = name;
    }
    int playerid;
    int age;
    void printing()
    {
        cout << playername << endl;
        cout << playerid << endl;
        cout << age;
    }
};

main()
{
    players sagar;
    string name;
    cout << "Name of player : ";
    cin >> name;
    cout << endl
         << "Input player id : ";
    cin >> sagar.playerid;
    cout << endl
         << "PLayer age : ";
    cin >> sagar.age;
    sagar.pname(name);
    sagar.printing();

    return 0;
}