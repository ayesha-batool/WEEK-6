#include <iostream>
using namespace std;
bool areSameNumber(int no1, int no2, int no3);
int main()
{
    int no1, no2, no3;
    cout << "Enter the first number: ";
    cin >> no1;
    cout << "Enter the second number: ";
    cin >> no2;
    cout << "Enter the third number: ";
    cin >> no3;
    bool result = areSameNumber(no1, no2, no3);
cout<<result;
    return 0;
}

bool areSameNumber(int no1, int no2, int no3)
{
    if (no1 == no2 && no2 == no3 && no1 == no3)
    {
        return 1;
    }
    else{
        return 0;
    }
}