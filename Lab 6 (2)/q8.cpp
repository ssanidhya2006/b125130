#include <iostream>
using namespace std;

class Item
{
    string name;
    float price;
    int quantity;

public:
    void input()
    {
        cout << "Enter item name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    Item operator+(Item i)
    {
        Item temp;

        if (name == i.name && price == i.price)
        {
            temp.name = name;
            temp.price = price;
            temp.quantity = quantity + i.quantity;
        }
        else
        {
            cout << "\nItems cannot be combined.";
            temp = *this;
        }

        return temp;
    }

    void display()
    {
        cout << name << "  Price: " << price
             << "  Quantity: " << quantity;
    }
};

int main()
{
    Item i1, i2, i3;

    cout << "Enter Item 1\n";
    i1.input();

    cout << "\nEnter Item 2\n";
    i2.input();

    i3 = i1 + i2;

    cout << "\nCombined Item: ";
    i3.display();

    return 0;
}