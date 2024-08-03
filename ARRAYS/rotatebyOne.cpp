#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
    // Store the last element
    int end = arr[n - 1];

    // assign every value by its precessor
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // first element will be assigned by last
    arr[0] = end;
}

int main()
{
    int arr[5] = {5, 6, 7, 8, 9};
    int n = 5;

    // initial array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    rotate(arr, n);

    cout << "Rotated array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}