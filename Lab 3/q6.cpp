#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    char name[50];
    float salary;

    void accept(){
        cout<<"enter ID NAME SALARY:";
        cin>>id>>name>>salary;
    }

    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};

int main(){
    int n;
    cout<<"enter no of employee:";
    cin>>n;

    employee *e = new employee[n];
    for(int i=0;i<n;i++)
       e[i].accept();

    cout<<"\nemployee details\n";
    for(int i=0;i<n;i++)
       e[i].display();
       
    delete[] e;
    
    return 0;
}