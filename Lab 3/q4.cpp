#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0, average;

    cout << "Enter the number of elements: ";
    cin >> n;

    float *arr = new float[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / n;

    cout << "Sum:" << sum << endl;
    cout << "Average:" << average << endl;

    delete[] arr;

    return 0;
}