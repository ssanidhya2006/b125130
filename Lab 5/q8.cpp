#include <iostream>
using namespace std;

int count(int n)
{
    int c = 0;

    if (n == 0)
        return 1;

    while (n != 0)
    {
        n = n / 10;
        c++;
    }

    return c;
}

int count(int a[], int n)
{
    return n;
}

int count(char a[], int n, char ch)
{
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == ch)
            c++;
    }

    return c;
}

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Number of digits = " << count(n) << endl;


    int a[100];

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Number of elements = " << count(a, n) << endl;


    char arr[100], ch;

    cout << "\nEnter size of character array: ";
    cin >> n;

    cout << "Enter characters: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter character to count: ";
    cin >> ch;

    cout << "Occurrences = " << count(arr, n, ch) << endl;

    return 0;
}