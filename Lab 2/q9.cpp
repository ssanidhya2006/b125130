#include <iostream>
using namespace std;

class StudentResult
{
    int roll, marks[5], total;
    float percentage;
    char grade;
    char name[50];

public:
    void input()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll;

        total = 0;

        cout << "Enter Marks of 5 Subjects:\n";
        for(int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total = total + marks[i];
        }
    }

    void calculate()
    {
        percentage = total / 5.0;

        if(percentage >= 90)
            grade = 'A';
        else if(percentage >= 80)
            grade = 'B';
        else if(percentage >= 70)
            grade = 'C';
        else if(percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\n----- Student Result -----\n" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    StudentResult s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}