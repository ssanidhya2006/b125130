#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;

public:
    void input()
    {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;
    }

    Distance operator+(Distance d)
    {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12)
        {
            temp.feet = temp.feet + temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        return temp;
    }

    void display()
    {
        cout << feet << " feet " << inches << " inches";
    }
};

int main()
{
    Distance d1, d2, d3;

    cout << "Enter Distance 1\n";
    d1.input();

    cout << "\nEnter Distance 2\n";
    d2.input();

    d3 = d1 + d2;

    cout << "\nResult: ";
    d3.display();

    return 0;
}