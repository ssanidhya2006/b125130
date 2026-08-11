#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[50];
    float marks;

    void accept()
    {
        cout << "Enter Roll, Name and Marks: ";
        cin >> roll >> name >> marks;
    }

    void display()
    {
        cout << "\nRoll:" << roll;
        cout << "\nName:" << name;
        cout << "\nMarks:" << marks;
    }
};

int main()
{
    Student *s = new Student;

    s->accept();
    s->display();

    delete s;

    return 0;
}