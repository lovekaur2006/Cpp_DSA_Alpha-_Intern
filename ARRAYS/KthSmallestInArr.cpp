// find kth smallest element in an array
#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j]; // L TO R
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp; // R TO L
    }
}
// int printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
int KthSmallest(int arr[], int size, int k)
{
    InsertionSort(arr, size);
    return arr[k - 1];
}

int main()
{
    int arr[6] = {2, 5, 7, 1, 4, 8};
    int size = 6;
    InsertionSort(arr, 6);
    cout << "The value of kth smallest is " << KthSmallest(arr, 6, 4) << endl;

    return 0;
}