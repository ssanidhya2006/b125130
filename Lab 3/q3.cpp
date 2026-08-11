#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no of elements:";
    cin>>n;

    int *arr = new int[n];
    cout<<"enter the elements:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest = arr[0];

    for(int i=0;i<n;i++){

        if(arr[i]>largest){
             largest=arr[i];
        }
    }

    cout<<"largest element:"<<largest<<endl;

    delete[] arr;
    return 0;

}