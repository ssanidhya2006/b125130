#include <iostream>
using namespace std;

class Diary
{
private:
    string ownerName;
    int entries;
    string lastEntry;

public:
    void input()
    {
        cout << "Enter owner name: ";
        getline(cin, ownerName);

        cout << "Enter number of entries: ";
        cin >> entries;
        cin.ignore();

        cout << "Enter last entry: ";
        getline(cin, lastEntry);
    }

    friend void displayDiary(Diary d);
};

void displayDiary(Diary d)
{
    cout << "\n--- Diary Details ---" << endl;
    cout << "Owner Name: " << d.ownerName << endl;
    cout << "Number of Entries: " << d.entries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
}

int main()
{
    Diary d;

    d.input();
    displayDiary(d);

    return 0;
}
