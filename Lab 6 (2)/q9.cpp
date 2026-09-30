#include <iostream>
using namespace std;

class Temperature
{
    float celsius;

public:
    void input()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    bool operator<(Temperature t)
    {
        return celsius < t.celsius;
    }

    bool operator>(Temperature t)
    {
        return celsius > t.celsius;
    }
};

int main()
{
    Temperature t1, t2;

    cout << "Enter Temperature 1\n";
    t1.input();

    cout << "\nEnter Temperature 2\n";
    t2.input();

    if (t1 < t2)
        cout << "\nFirst temperature is lower.";
    else if (t1 > t2)
        cout << "\nFirst temperature is higher.";
    else
        cout << "\nBoth temperatures are equal.";

    return 0;
}