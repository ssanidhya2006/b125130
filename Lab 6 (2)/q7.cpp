#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    void input()
    {
        cout << "Enter day month year: ";
        cin >> day >> month >> year;
    }

    bool operator==(Date d)
    {
        return day == d.day &&
               month == d.month &&
               year == d.year;
    }
};

int main()
{
    Date d1, d2;

    cout << "Enter Date 1\n";
    d1.input();

    cout << "Enter Date 2\n";
    d2.input();

    if (d1 == d2)
        cout << "Both dates are equal.";
    else
        cout << "Dates are not equal.";

    return 0;
}