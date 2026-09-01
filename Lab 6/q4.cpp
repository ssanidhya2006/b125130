#include <iostream>
using namespace std;

int main() {
    int seats[8];

    cout<<"Enter 8 seat numbers:\n";
    for(int i=0;i<8;i++)
        cin>>seats[i];

    cout<<"\nBefore Correction:\n";
    for(int i=0;i<8;i++)
        cout<<seats[i]<<" ";

    int pos,newSeat;
    cout<<"\nEnter position(0-7): ";
    cin>>pos;

    cout<<"Enter new seat number: ";
    cin>>newSeat;

    int *ptr=seats;

    *(ptr+pos)=newSeat; // it will go forward in array and will change that postion with new seat no

    cout<<"\nAfter Correction:\n";
    for(int i=0;i<8;i++)
        cout<<seats[i]<<" ";

    return 0;
}