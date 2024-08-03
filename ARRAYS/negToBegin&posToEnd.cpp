// Move all negative numbers to beginning and positive numbers to end with constant extra space
#include <iostream>
using namespace std;

void sorting(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 7, -4, -9, 2};
    int n = 5;
    sorting(arr, n);
    printArr(arr, n);
    return 0;
}