#include <iostream>
using namespace std;

int main()
{
    float houses;
    float dollar;
    cin >> houses;

    //your code goes here
    {
        dollar = (((houses - (houses - 2))) / houses) * 100;
        if (dollar == (int)dollar) {
            cout << dollar;
        }
        else
            cout << (int)dollar + 1;
    }
    return 0;
}