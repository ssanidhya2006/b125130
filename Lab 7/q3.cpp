#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string regNo;
    int days;

public:
    Vehicle(string r, int d)
    {
        regNo = r;
        days = d;
    }
};

class Car : public Vehicle
{
protected:
    float rate;

public:
    Car(string r, int d, float x)
        : Vehicle(r, d)
    {
        rate = x;
    }
};

class LuxuryCar : public Car
{
    float luxuryCharge;

public:
    LuxuryCar(string r, int d, float x, float l)
        : Car(r, d, x)
    {
        luxuryCharge = l;
    }

    void display()
    {
        float total = (rate + luxuryCharge) * days;

        cout << "Registration No: " << regNo << endl;
        cout << "Rental Days: " << days << endl;
        cout << "Total Cost: " << total << endl;
    }
};

int main()
{
    LuxuryCar c("OD02AB1234", 5, 3000, 1000);

    c.display();

    return 0;
}