#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;
    int m1, m2, m3;

public:
    Student(string n, int r, int a, int b, int c)
    {
        name = n;
        rollNo = r;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    virtual void calculateResult()
    {
        cout << "Result" << endl;
    }
};

class RegularStudent : public Student
{
public:
    RegularStudent(string n, int r, int a, int b, int c)
        : Student(n, r, a, b, c)
    {
    }

    void calculateResult()
    {
        int total = m1 + m2 + m3;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student
{
public:
    ScholarshipStudent(string n, int r, int a, int b, int c)
        : Student(n, r, a, b, c)
    {
    }

    void calculateResult()
    {
        int total = m1 + m2 + m3 + 5;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    RegularStudent r("Amit", 101, 70, 80, 75);
    ScholarshipStudent s("Riya", 102, 70, 80, 75);

    cout << "Regular Student:" << endl;
    r.calculateResult();

    cout << "\nScholarship Student:" << endl;
    s.calculateResult();

    return 0;
}