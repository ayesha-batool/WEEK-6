#include <iostream>
using namespace std;
string checkSpeed(float speed);
int main()
{
    float speed;
    // int speed, no2, no3;
    cout << "Enter the speed: ";
    cin >> speed;
    // cout << "Enter the second number: ";
    // cin >> no2;
    // cout << "Enter the third number: ";
    // cin >> no3;
    string result = checkSpeed(speed);
    cout << result;
    return 0;
}

string checkSpeed(float speed)
{
    if (speed <= 10)
    {
        return "slow";
    }

    if (speed <= 50)
    {
        return "average";
    }

    if (speed <= 150)
    {
        return "fast";
    }

    if (speed <= 1000)
    {
        return "ultra-fast";
    }

    // if (speed > 1000)
    // {150

    //     return "extremely fast";
    // }

    else
    {
        return "extremely fast";
    }
}