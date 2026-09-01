#include <iostream>
using namespace std;

int main() {
    int ids[6];

    cout << "Enter 6 Equipment IDs:\n";
    for(int i=0;i<6;i++)
        cin>>ids[i];

    int *ptr = ids;

    cout<<"\nEquipment IDs and Addresses:\n";

    for(int i=0;i<6;i++) {
        cout<<"ID: "<<*ptr<<" Address: "<<ptr<<endl;
        ptr++;
    }

    return 0;
}