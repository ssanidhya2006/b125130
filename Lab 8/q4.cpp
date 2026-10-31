#include <iostream>
using namespace std;

class Delivery
{
public:
    virtual void estimateTime(double distance)
    {
        cout << "Delivery Time" << endl;
    }
};

class BikeDelivery : public Delivery
{
public:
    void estimateTime(double distance)
    {
        double time = (distance / 20) * 60 + 5;

        cout << "Bike Delivery Time: " << time << " minutes" << endl;
    }
};

class DroneDelivery : public Delivery
{
public:
    void estimateTime(double distance)
    {
        double time = (distance / 40) * 60 + 2;

        cout << "Drone Delivery Time: " << time << " minutes" << endl;
    }
};

int main()
{
    BikeDelivery b;
    DroneDelivery d;

    b.estimateTime(20);
    d.estimateTime(20);

    return 0;
}