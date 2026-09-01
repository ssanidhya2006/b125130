#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number of contacts: ";
    cin>>n;

    long long *contact=new long long[n];

    cout<<"Enter contact numbers:\n";

    for(int i=0;i<n;i++)
        cin>>*(contact+i);

    long long search;

    cout<<"Enter number to search: ";
    cin>>search;

    long long *ptr=contact;

    bool found=false;

    for(int i=0;i<n;i++){
        if(*ptr==search){
            cout<<"Found at position "<<i<<endl;
            found=true;
            break;
        }
        ptr++;
    }

    if(!found)
        cout<<"Contact not found."<<endl;

    delete[] contact;

    return 0;
}