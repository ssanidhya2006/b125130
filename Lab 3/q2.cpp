#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter the no of elements:";
    cin>>n;

    int *arr = new int[n];
    cout<<"enter the elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"the elements are:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}