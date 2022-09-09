#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int cost = 0;

    for (int i = 1; i <= a; i++)
    {
        string b;
        cin >> b;
        int bedrooms, bathrooms;

        if (b == "standard")
        {

            cin >> bedrooms;
            cin >> bathrooms;

            cost = cost + bedrooms * 50 + bathrooms * 100;
            bedrooms = bathrooms = 0;
        }

        if (b == "apartment")
        {
            cin >> bedrooms;
            cin >> bathrooms;

            cost = cost + bedrooms * 50 + bathrooms * 100 + 100;
        }
    }
    cout << cost;
    return 0;
}
