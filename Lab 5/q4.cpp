#include <iostream>
using namespace std;

int search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i;
    }

    return -1;
}

int search(char a[], int n, char key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i;
    }

    return -1;
}

int search(int a[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (a[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int a[100], n, key;
    char b[100], ch;

    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter integer to search: ";
    cin >> key;

    int pos = search(a, n, key);

    if (pos != -1)
        cout << "Found at position " << pos << endl;
    else
        cout << "Element not found" << endl;


    cout << "\nEnter size of character array: ";
    cin >> n;

    cout << "Enter characters: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    cout << "Enter character to search: ";
    cin >> ch;

    pos = search(b, n, ch);

    if (pos != -1)
        cout << "Character found at position " << pos << endl;
    else
        cout << "Character not found" << endl;


    int start, end;

    cout << "\nEnter start and end index: ";
    cin >> start >> end;

    cout << "Enter integer to search: ";
    cin >> key;

    pos = search(a, start, end, key);

    if (pos != -1)
        cout << "Found at position " << pos << endl;
    else
        cout << "Element not found in given range" << endl;

    return 0;
}