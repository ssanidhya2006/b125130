#include <iostream>
using namespace std;

void longestEpisode(int *ptr,int n){
    int max=*ptr;

    for(int i=1;i<n;i++){
        ptr++;

        if(*ptr>max)
            max=*ptr;
    }

    cout<<"Longest Episode: "<<max<<" minutes";
}

int main(){
    int duration[6];

    cout<<"Enter 6 durations:\n";

    for(int i=0;i<6;i++)
        cin>>duration[i];

    longestEpisode(duration,6);

    return 0;
}