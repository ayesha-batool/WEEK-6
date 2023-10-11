#include <iostream>
using namespace std;
float totalIncome(string type, int rows, int columns);
int main()
{
    string type;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;

    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int columns;
    cout << "Enter the number of columns: ";
    cin >> columns;

    float result = totalIncome(type, rows, columns);
    cout << result << endl;
    return 0;
}

float totalIncome(string type, int rows, int columns)
{
    if (type == "Premiere")
    {
        float formula = rows*columns * 12;
        return formula;
    }
    if (type == "Normal")
    {
        float formula = rows*columns * 7.5;
        return formula;
    }
    if (type == "Discount")
    {
        float formula = rows*columns * 5;
        return formula;
    }
}