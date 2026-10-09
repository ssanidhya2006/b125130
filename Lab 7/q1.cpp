#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    float basicSalary;

public:
    Employee(string n, float s)
    {
        name = n;
        basicSalary = s;
    }
};

class Developer : public Employee
{
protected:
    int experience;

public:
    Developer(string n, float s, int e)
        : Employee(n, s)
    {
        experience = e;
    }

    float getBonus()
    {
        return 0.05 * basicSalary * experience;
    }
};

class SeniorDeveloper : public Developer
{
    float projectBonus;

public:
    SeniorDeveloper(string n, float s, int e, float p)
        : Developer(n, s, e)
    {
        projectBonus = p;
    }

    void display()
    {
        float experienceBonus = getBonus();
        float finalSalary = basicSalary + experienceBonus + projectBonus;

        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Experience Bonus: " << experienceBonus << endl;
        cout << "Project Bonus: " << projectBonus << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main()
{
    SeniorDeveloper s("Rahul", 50000, 4, 10000);

    s.display();

    return 0;
}