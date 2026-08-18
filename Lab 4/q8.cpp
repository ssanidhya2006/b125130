#include <iostream>
using namespace std;

class TrainSeat
{
private:
    int seatNumber;
    string passengerName;
    bool booked;

public:
    void input()
    {
        cout << "Enter seat number: ";
        cin >> seatNumber;

        cout << "Enter passenger name: ";
        cin >> passengerName;

        int choice;
        cout << "Enter 1 if booked, 0 if available: ";
        cin >> choice;

        booked = choice;
    }

    friend class TicketChecker;
};

class TicketChecker
{
public:
    void checkSeat(TrainSeat t)
    {
        cout << "\n--- Seat Details ---" << endl;
        cout << "Seat Number: " << t.seatNumber << endl;

        if (t.booked)
        {
            cout << "Status: Booked" << endl;
            cout << "Passenger Name: " << t.passengerName << endl;
        }
        else
        {
            cout << "Status: Available" << endl;
        }
    }
};

int main()
{
    TrainSeat t;
    TicketChecker c;

    t.input();
    c.checkSeat(t);

    return 0;
}