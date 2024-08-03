// Find maximum and minimum in an array
#include <iostream>
using namespace std;
int MaxElement(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int MinElement(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[6] = {1, 6, 3, 4, 2, 8};
    int size = 6;
    cout << "The maximum element in the array is " << MaxElement(arr, 6) << endl;
    cout << "The minimum element in the array is " << MinElement(arr, 6) << endl;

    return 0;
}