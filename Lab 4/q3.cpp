#include<iostream>
using namespace std;
class parkingslot{
    private:
    int slotno;
    string vehicleno;
    bool occupied;

    public:
    void input(){
        cout<<"enter slot no:";
        cin>>slotno;

        cout<<"enter vehicle no:";
        cin>>vehicleno;
        
        int choice;
        cout<<"enter 1 if occupied,0 if available:";
        cin>>choice;

        occupied=choice;
    }

    friend void checkslot(parkingslot p);
};

void checkslot(parkingslot p){
    cout<<"\nparking details\n"<<endl;
    cout<<"slot no:"<<p.slotno<<endl;

    if(p.occupied){
        cout<<"status occupied"<<endl;
        cout<<"vehicle no:"<<p.vehicleno<<endl;
    }    
    else{
        cout<<"status: available"<<endl;
    }    
    
}

int main(){
    parkingslot p;

    p.input();
    checkslot(p);
    return 0;
}