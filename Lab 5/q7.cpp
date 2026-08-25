#include <iostream>
using namespace std;

int compare(int a, int b)
{
    return (a > b) ? a : b;
}

float compare(float a, float b)
{
    return (a > b) ? a : b;
}

bool compare(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main()
{
    int a, b;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Larger = " << compare(a, b) << endl;


    cout << "\nEnter two floating-point numbers: ";
    cin >> x >> y;

    cout << "Larger = " << compare(x, y) << endl;


    int n;
    int arr1[100], arr2[100];

    cout << "\nEnter size of arrays: ";
    cin >> n;

    cout << "Enter first array: ";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter second array: ";
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    if (compare(arr1, arr2, n))
        cout << "Both arrays are identical" << endl;
    else
        cout << "Arrays are not identical" << endl;

    return 0;
}