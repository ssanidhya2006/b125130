#include <iostream>
using namespace std;

class Product
{
    string name;
    float price;
    int quantity;

public:
    void input()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    Product operator+(Product p)
    {
        Product temp;

        if (name == p.name && price == p.price)
        {
            temp.name = name;
            temp.price = price;
            temp.quantity = quantity + p.quantity;
        }
        else
        {
            cout << "\nProducts cannot be combined.";
            temp = *this;
        }

        return temp;
    }

    bool operator>(Product p)
    {
        return (price * quantity) > (p.price * p.quantity);
    }

    void display()
    {
        cout << name << "  Price: " << price
             << "  Quantity: " << quantity
             << "  Total Value: " << price * quantity;
    }
};

int main()
{
    Product p1, p2, p3;

    cout << "Enter Product 1\n";
    p1.input();

    cout << "\nEnter Product 2\n";
    p2.input();

    p3 = p1 + p2;

    cout << "\nCombined Product: ";
    p3.display();

    cout << "\n\nComparing total values:";

    if (p1 > p2)
        cout << "\nProduct 1 has higher total value.";
    else if (p2 > p1)
        cout << "\nProduct 2 has higher total value.";
    else
        cout << "\nBoth products have equal total value.";

    return 0;
}