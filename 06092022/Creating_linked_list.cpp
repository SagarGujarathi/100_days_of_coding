#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class temp
{
public:
    int value;
    int *next;
};
void function(int Value)
{
    temp *node = new temp();
    node->value = Value;
    node->next = NULL;
}

int main()
{
    function(10);
    function(20);
    function(30);

    return 0;
}