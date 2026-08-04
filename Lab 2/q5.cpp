#include<iostream>
using namespace std;

class employee{
    int id;
    char name[50];
    float basic,hra,da,gross;

    public:

    void input(){
        cout<<"enter id:";
        cin>>id;

        cout<<"enter name:";
        cin>>name;

        cout<<"enter basic salary:";
        cin>>basic;
    }

    void calculate(){
        hra=basic*0.20;
        da=basic*0.10;
        gross=basic+hra+da;
    }

    void display(){
        cout<<"\n employee details\n"<<endl;
        cout<<"emp id:"<<id<<endl;
        cout<<"emp name:"<<name<<endl;
        cout<<"basic salary:"<<basic<<endl;
        cout<<"HRA:"<<hra<<endl;
        cout<<"DA:"<<da<<endl;
        cout<<"GROSS:"<<gross<<endl;
    }
           
    };

    int main(){
        employee e;
        e.input();
        e.calculate();
        e.display();

        return 0;
    }
