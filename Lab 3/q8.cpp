#include <iostream>
using namespace std;

class Student
{
public:
    int roll, subjects;
    char name[50];
    int *marks;

    void accept()
    {
        cout<<"Roll Name Subjects: ";
        cin>>roll>>name>>subjects;

        marks=new int[subjects];

        cout<<"Enter marks:\n";
        for(int i=0;i<subjects;i++)
            cin>>marks[i];
    }

    void display()
    {
        int total=0;

        for(int i=0;i<subjects;i++)
            total+=marks[i];

        cout<<"\nRoll: "<<roll;
        cout<<"\nName: "<<name;
        cout<<"\nTotal: "<<total;
        cout<<"\nAverage: "<<(float)total/subjects<<endl;
    }

};

int main()
{
    Student s;

    s.accept();
    s.display();

    delete[] s.marks;
    

    return 0;
}