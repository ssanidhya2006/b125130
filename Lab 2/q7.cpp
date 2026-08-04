#include <iostream>
using namespace std;

class Product
{
    int id, quantity, sold;
    char name[50];
    float price;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void sell()
    {
        cout << "Enter Quantity to Sell: ";
        cin >> sold;

        if (sold <= quantity)
        {
            quantity = quantity - sold;
            cout << "Product Sold Successfully!" << endl;
        }
        else
        {
            cout << "Not Enough Stock Available!" << endl;
        }
    }

    void display()
    {
        cout << "\n--- Product Details ---\n" << endl;
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Available Quantity: " << quantity << endl;
        cout << "Price per Unit: " << price << endl;
        cout << "Total Inventory Value: " << quantity * price << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.sell();
    p.display();

    return 0;
}