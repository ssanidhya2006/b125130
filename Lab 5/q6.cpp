#include <iostream>
using namespace std;

void display(int a)
{
    cout << "Integer: " << a << endl;
}

void display(float a)
{
    cout << "Float: " << a << endl;
}

void display(char a)
{
    cout << "Character: " << a << endl;
}

void display(int a[], int n)
{
    cout << "Integer Array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

void display(char a[], int n)
{
    cout << "Character Array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    int a, n;
    float f;
    char ch;

    cout << "Enter integer: ";
    cin >> a;
    display(a);

    cout << "\nEnter float: ";
    cin >> f;
    display(f);

    cout << "\nEnter character: ";
    cin >> ch;
    display(ch);

    int arr[100];

    cout << "\nEnter integer array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    display(arr, n);

    char carr[100];

    cout << "\nEnter character array size: ";
    cin >> n;

    cout << "Enter characters: ";
    for (int i = 0; i < n; i++)
        cin >> carr[i];

    display(carr, n);

    return 0;
}