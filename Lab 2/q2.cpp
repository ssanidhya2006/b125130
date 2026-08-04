#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    void input()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    void display()
    {
        float area = length * breadth;
        float perimeter = 2 * (length + breadth);

        cout << "\nArea = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.display();

    return 0;
}