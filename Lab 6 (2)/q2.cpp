#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex operator-(Complex c)
    {
        Complex temp;

        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number\n";
    c1.input();

    cout << "\nEnter second complex number\n";
    c2.input();

    c3 = c1 - c2;

    cout << "\nResult: ";
    c3.display();

    return 0;
}