#include <iostream>
using namespace std;

void updateMarks(int *ptr,int n){
    for(int i=0;i<n;i++){
        *ptr+=5;
        ptr++;
    }
}

int main(){
    int n;

    cout<<"Enter number of students: ";
    cin>>n;

    int marks[n];

    cout<<"Enter marks:\n";

    for(int i=0;i<n;i++)
        cin>>marks[i];

    cout<<"\nBefore:\n";

    for(int i=0;i<n;i++)
        cout<<marks[i]<<" ";

    updateMarks(marks,n);

    cout<<"\nAfter(+5):\n";

    for(int i=0;i<n;i++)
        cout<<marks[i]<<" ";

    return 0;
}