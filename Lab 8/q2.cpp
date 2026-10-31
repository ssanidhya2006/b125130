#include <iostream>
using namespace std;

class ParkingSlot
{
public:
    virtual void calculateFee(int hours)
    {
        cout << "Parking Fee" << endl;
    }
};

class TwoWheelerSlot : public ParkingSlot
{
public:
    void calculateFee(int hours)
    {
        float fee = hours * 10;

        if (hours > 5)
        {
            fee = fee - fee * 0.10;
        }

        cout << "Two Wheeler Fee: Rs. " << fee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot
{
public:
    void calculateFee(int hours)
    {
        float fee = hours * 30;

        if (hours > 5)
        {
            fee = fee - fee * 0.10;
        }

        cout << "Four Wheeler Fee: Rs. " << fee << endl;
    }
};

int main()
{
    TwoWheelerSlot t;
    FourWheelerSlot f;

    t.calculateFee(6);
    f.calculateFee(6);

    return 0;
}