#include <iostream>
using namespace std;

int total(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

float total(float a[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int total(int a[], int n, int count)
{
    int sum = 0;

    for (int i = 0; i < count; i++)
        sum += a[i];

    return sum;
}

int main()
{
    int n, count;
    int a[100];
    float b[100];

    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter integer elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Total = " << total(a, n) << endl;

    cout << "\nEnter size of floating-point array: ";
    cin >> n;

    cout << "Enter floating-point elements: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    cout << "Total = " << total(b, n) << endl;

    cout << "\nEnter number of elements to consider from integer array: ";
    cin >> count;

    cout << "Total of portion = " << total(a, n, count) << endl;

    return 0;
}