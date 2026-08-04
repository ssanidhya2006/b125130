#include<iostream>
using namespace std;

class student{
    int roll;
    char name[50];
    float marks;

public:
    void input(){
        cout<<"enter roll no:";
        cin>>roll;

        cout<<"enter name:";
        cin>>name;

        cout<<"enter marks:";
        cin>>marks;

    }

    void display(){
        cout<<"\nstudent details\n" <<endl;
        cout<<"roll no:" <<roll <<endl;
        cout<<"name:" <<name <<endl;
        cout<<"marks:" <<marks <<endl;
    }

};

int main(){
    student s;
    s.input();
    s.display();

    return 0;
    
}