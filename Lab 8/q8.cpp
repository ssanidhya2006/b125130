#include <iostream>
using namespace std;

class CloudResource
{
public:
    virtual void calculateCost(double cpuHours)
    {
        cout << "Calculating Cost" << endl;
    }
};

class StandardInstance : public CloudResource
{
public:
    void calculateCost(double cpuHours)
    {
        double cost = cpuHours * 5;

        if (cpuHours > 100)
        {
            cost = cost - cost * 0.15;
        }

        cout << "Standard Instance Cost: Rs. " << cost << endl;
    }
};

class PremiumInstance : public CloudResource
{
public:
    void calculateCost(double cpuHours)
    {
        double cost = cpuHours * 12;

        if (cpuHours > 100)
        {
            cost = cost - cost * 0.15;
        }

        cout << "Premium Instance Cost: Rs. " << cost << endl;
    }
};

int main()
{
    StandardInstance s;
    PremiumInstance p;

    s.calculateCost(120);
    p.calculateCost(120);

    return 0;
}