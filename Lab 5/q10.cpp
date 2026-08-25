#include <iostream>
using namespace std;

int process(int a, int b)
{
    return a + b;
}

float process(int a, float b)
{
    return a + b;
}

float process(float a, float b)
{
    return a + b;
}

int process(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a, b;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Result = " << process(a, b) << endl;


    cout << "\nEnter an integer and a float: ";
    cin >> a >> x;

    cout << "Result = " << process(a, x) << endl;


    cout << "\nEnter two floats: ";
    cin >> x >> y;

    cout << "Result = " << process(x, y) << endl;


    int arr[100], n;

    cout << "\nEnter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array sum = " << process(arr, n) << endl;


    cout << "\nEnter two integers for pointer operation: ";
    cin >> a >> b;

    cout << "Result = " << process(&a, &b) << endl;

    return 0;
}