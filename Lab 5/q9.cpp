#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int maximum(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}

int maximum(int *a, int n)
{
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Maximum = " << maximum(a, b) << endl;


    cout << "\nEnter two integers for pointer comparison: ";
    cin >> a >> b;

    cout << "Maximum = " << maximum(&a, &b) << endl;


    int arr[100], n;

    cout << "\nEnter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum = " << maximum(arr, n) << endl;

    return 0;
}