#include <iostream>
using namespace std;

int main() {
    int level,add,remove;

    cout << "Enter current water level: ";
    cin >> level;

    int *ptr = &level;

    cout << "Current Level: " << *ptr << endl;

    cout << "Enter water to add: ";
    cin >> add;
    *ptr += add;

    cout << "Enter water to remove: ";
    cin >> remove;
    *ptr -= remove;

    cout << "Final Water Level: " << *ptr << endl;

    return 0;
}