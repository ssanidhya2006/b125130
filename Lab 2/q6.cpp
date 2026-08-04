#include <iostream>
using namespace std;

class Distance
{
private:
    int feet1, inch1;
    int feet2, inch2;
    int feet, inch;

public:
    void input()
    {
        cout << "Enter First Distance (Feet Inches): ";
        cin >> feet1 >> inch1;

        cout << "Enter Second Distance (Feet Inches): ";
        cin >> feet2 >> inch2;
    }

    void add()
    {
        feet = feet1 + feet2;
        inch = inch1 + inch2;

        if (inch >= 12)
        {
            feet = feet + inch / 12;
            inch = inch % 12;
        }
    }

    void display()
    {
        cout << "\nTotal Distance = " << feet << " Feet "
             << inch << " Inches" << endl;
    }
};

int main()
{
    Distance d;

    d.input();
    d.add();
    d.display();

    return 0;
}