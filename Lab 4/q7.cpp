#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int score;
    int level;

public:
    void input()
    {
        cout << "Enter player name: ";
        cin >> name;

        cout << "Enter health: ";
        cin >> health;

        cout << "Enter score: ";
        cin >> score;

        cout << "Enter level: ";
        cin >> level;
    }

    friend class GameManager;
};

class GameManager
{
public:
    void displayPlayer(Player p)
    {
        cout << "\n--- Player Details ---" << endl;
        cout << "Name: " << p.name << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }

    void checkAlive(Player p)
    {
        if (p.health > 0)
            cout << "Player is Alive" << endl;
        else
            cout << "Player is Dead" << endl;
    }

    void displayLevelScore(Player p)
    {
        cout << "Level: " << p.level << endl;
        cout << "Score: " << p.score << endl;
    }
};

int main()
{
    Player p;
    GameManager g;

    p.input();

    g.displayPlayer(p);
    g.checkAlive(p);
    g.displayLevelScore(p);

    return 0;
}