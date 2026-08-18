#include <iostream>
using namespace std;

class Door
{
private:
    int doorNumber;
    bool locked;

public:
    void input()
    {
        cout << "Enter door number: ";
        cin >> doorNumber;

        int choice;
        cout << "Enter 1 if locked, 0 if unlocked: ";
        cin >> choice;

        locked = choice;
    }

    friend class SecuritySystem;
};

class SecuritySystem
{
public:
    void checkDoor(Door d)
    {
        cout << "\n--- Door Details ---" << endl;
        cout << "Door Number: " << d.doorNumber << endl;

        if (d.locked)
            cout << "Status: Locked" << endl;
        else
            cout << "Status: Unlocked" << endl;
    }
};

int main()
{
    Door d;
    SecuritySystem s;

    d.input();
    s.checkDoor(d);

    return 0;
}