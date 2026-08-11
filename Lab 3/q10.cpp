#include <iostream>
using namespace std;

class Employee
{
public:
    int id, months;
    char name[50];
    float *salary;

    void accept()
    {
        cout<<"ID Name Months: ";
        cin>>id>>name>>months;

        salary=new float[months];

        cout<<"Enter monthly earnings:\n";
        for(int i=0;i<months;i++)
            cin>>salary[i];
    }

    void display()
    {
        float total=0, max=salary[0];
        int month=1;

        for(int i=0;i<months;i++)
        {
            total+=salary[i];
            if(salary[i]>max)
            {
                max=salary[i];
                month=i+1;
            }
        }

        cout<<"\nTotal = "<<total;
        cout<<"\nAverage = "<<total/months;
        cout<<"\nHighest Earning = "<<max;
        cout<<"\nHighest Earning Month = "<<month;
    }

};

int main()
{
    Employee e;

    e.accept();
    e.display();

    delete[] e.salary;

    return 0;
}