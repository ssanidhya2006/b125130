#include <iostream>
using namespace std;

class LibraryBook
{
    int bookId, days, fine;
     char bookTitle[50], studentName[50];

public:
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Title: ";
        cin >> bookTitle;

        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Number of Days Book Issued: ";
        cin >> days;
    }

    void calculateFine()
    {
        if (days > 15)
            fine = (days - 15) * 2;
        else
            fine = 0;
    }

    void display()
    {
        cout << "\n----- Library Details -----\n" << endl;
        cout << "Book ID: " << bookId << endl;
        cout << "Book Title: " << bookTitle << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Days Issued: " << days << endl;
        cout << "Fine: Rs. " << fine << endl;
    }
};

int main()
{
    LibraryBook b;

    b.input();
    b.calculateFine();
    b.display();

    return 0;
}