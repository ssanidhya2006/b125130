#include <iostream>
using namespace std;

class Robot
{
public:
    virtual void move(double distance)
    {
        cout << "Robot is moving" << endl;
    }
};

class WheeledRobot : public Robot
{
public:
    void move(double distance)
    {
        double time = distance / 2;

        cout << "Wheeled Robot Time: " << time << " seconds" << endl;
    }
};

class TrackedRobot : public Robot
{
public:
    void move(double distance)
    {
        double time = distance / 1.2;

        cout << "Tracked Robot Time: " << time << " seconds" << endl;
    }
};

int main()
{
    WheeledRobot w;
    TrackedRobot t;

    Robot *ptr;

    ptr = &w;
    ptr->move(20);

    ptr = &t;
    ptr->move(20);

    return 0;
}