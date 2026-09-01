#include <iostream>
using namespace std;

int main() {
    int battery, charge;

    cout << "Enter battery percentage: ";
    cin >> battery;

    int *ptr = &battery;

    cout << "Current Battery: " << *ptr << "%\n";

    cout << "Enter charging amount: ";
    cin >> charge;

    *ptr += charge;

    cout << "Updated Battery: " << *ptr << "%\n";

    return 0;
}