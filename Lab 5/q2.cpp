#include <iostream>
using namespace std;

int larger(int a, int b)
{
    return (a > b) ? a : b;
}

float larger(float a, float b)
{
    return (a > b) ? a : b;
}

int larger(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main()
{
    int a, b, c;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Larger = " << larger(a, b) << endl;

    cout << "\nEnter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Larger = " << larger(x, y) << endl;

    cout << "\nEnter three integers: ";
    cin >> a >> b >> c;
    cout << "Larger = " << larger(a, b, c) << endl;

    return 0;
}