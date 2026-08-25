#include <iostream>
using namespace std;

int modify(int a, int value)
{
    return a + value;
}

float modify(float a, float value)
{
    return a + value;
}

void modify(int *a, int value)
{
    *a = *a + value;
}

int main()
{
    int a, value;
    float x, fvalue;

    cout << "Enter integer and value to add: ";
    cin >> a >> value;

    cout << "Before: " << a << endl;
    cout << "After: " << modify(a, value) << endl;


    cout << "\nEnter floating-point value and value to add: ";
    cin >> x >> fvalue;

    cout << "Before: " << x << endl;
    cout << "After: " << modify(x, fvalue) << endl;


    cout << "\nEnter integer for pointer modification: ";
    cin >> a;

    cout << "Enter value to add: ";
    cin >> value;

    cout << "Before: " << a << endl;

    modify(&a, value);

    cout << "After: " << a << endl;

    return 0;
}