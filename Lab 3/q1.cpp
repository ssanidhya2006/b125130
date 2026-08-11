#include<iostream>
using namespace std;

int main(){
    int *p = new int;
    cout<<"enter an integer:";
    cin>>*p;

    cout<<"the value is:"<<*p<<endl;

    delete p;

    return 0;
}