#include <iostream>
using namespace std;

class Character
{
public:
    virtual void attack()
    {
        cout << "Character attacks" << endl;
    }
};

class Warrior : public Character
{
    int strength;

public:
    Warrior(int s)
    {
        strength = s;
    }

    void attack()
    {
        int damage = 20 + 2 * strength;

        cout << "Warrior Damage: " << damage << endl;
    }
};

class Archer : public Character
{
    int agility;

public:
    Archer(int a)
    {
        agility = a;
    }

    void attack()
    {
        int damage = 15 + 3 * agility;

        cout << "Archer Damage: " << damage << endl;
    }
};

int main()
{
    Warrior w(10);
    Archer a(15);

    w.attack();
    a.attack();

    return 0;
}