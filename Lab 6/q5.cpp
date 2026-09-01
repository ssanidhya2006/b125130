#include <iostream>
using namespace std;

void updateStatus(int *status){
    if(*status==1)
        *status=2;
    else if(*status==2)
        *status=3;
}

int main(){
    int status;

    cout<<"Enter status: ";
    cin>>status;

    cout<<"Before: "<<status<<endl;

    updateStatus(&status);

    cout<<"After: "<<status<<endl;

    return 0;
}