#include <iostream>
using namespace std;

class Product
{
public:
    int id, quantity;
    char name[50];
    float price;

    void accept()
    {
        cout<<"ID Name Price Quantity: ";
        cin>>id>>name>>price>>quantity;
    }

    void display()
    {
        cout<<id<<" "<<name<<" "<<price<<" "<<quantity<<endl;
    }
};

int main()
{
    int n;
    float total=0;

    cout<<"Enter number of products: ";
    cin>>n;

    Product *p=new Product[n];

    for(int i=0;i<n;i++)
    {
        p[i].accept();
        total+=p[i].price*p[i].quantity;
    }

    cout<<"\nProducts:\n";
    for(int i=0;i<n;i++)
        p[i].display();

    cout<<"\nTotal Amount = "<<total;

    delete[] p;

    return 0;
}