#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter total marks: ";
        cin >> marks;
    }

    bool operator>(Student s)
    {
        return marks > s.marks;
    }

    void display()
    {
        cout << name << " has higher marks.";
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter Student 1\n";
    s1.input();

    cout << "\nEnter Student 2\n";
    s2.input();

    if (s1 > s2)
        s1.display();
    else
        s2.display();

    return 0;
}