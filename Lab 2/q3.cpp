#include<iostream>
using namespace std;

class calculator
{
    float a,b;

public:
      void input(){
        cout<<"enter two nos:";
        cin>>a>>b;

      } 
      
      void add(){
        cout<<"addition:" <<a+b<<endl;
      }

      void sub(){
        cout<<"subtraction:"<<a-b<<endl;
      }

      void multiply(){
        cout<<"multiplication:"<<a*b<<endl;
      }

      void divide(){
        if(b!=0)
           cout<<"division:"<<a/b<<endl;
        else
           cout<<"division not possible"<<endl;   
      }
};

int main(){
    calculator c;
    c.input();
    c.add();
    c.sub();
    c.multiply();
    c.divide();

    return 0;
}