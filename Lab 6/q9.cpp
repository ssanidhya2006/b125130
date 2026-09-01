#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter no of tables: ";
    cin>>n;

    int *table=new int[n];

    cout<<"Enter the table numbers:\n";

    for(int i=0;i<n;i++)
        cin>> *(table+i);

    int smallest=*table;

    int *ptr=table;

    for(int i=1;i<n;i++){
        ptr++;

        if(*ptr<smallest)
            smallest=*ptr;
    }

    cout<<"Smallest Table Number: "<<smallest<<endl;

    delete[] table;

    return 0;
}

