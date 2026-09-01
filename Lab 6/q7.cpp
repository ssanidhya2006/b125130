#include <iostream>
using namespace std;

int main(){
    char text[100];

    cout<<"Enter a sentence: ";
    cin.getline(text,100);

    char *ptr=text;

    int digits=0,letters=0,spaces=0;

    while(*ptr!='\0'){
        if(isdigit(*ptr))
            digits++;
        else if(isalpha(*ptr))
            letters++;
        else if(*ptr==' ')
            spaces++;

        ptr++;
    }

    cout<<"Digits: "<<digits<<endl;
    cout<<"Letters: "<<letters<<endl;
    cout<<"Spaces: "<<spaces<<endl;

    return 0;
}