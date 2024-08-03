// Find union and intersection of two unsorted arrays
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printUnion(vector<int> arr1, vector<int> arr2, int m, int n)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }

        else if (arr2[i] < arr1[i])
        {
            cout << arr2[j++] << " ";
        }

        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
    // Printing the remaining elements of a larger array
    while (i < m)
    {
        cout << arr1[i++] << " ";
    }
    while (j < n)
    {
        cout << arr2[j++] << " ";
    }
}

// Intersection
void printIntersection(vector<int> arr1, vector<int> arr2, int m, int n)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }

        else if (arr2[i] < arr1[i])
        {
            j++;
        }

        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    vector<int> arr1 = {7, 1, 5, 2, 3, 6};
    vector<int> arr2 = {3, 8, 6, 20, 5};
    int m = arr1.size();
    int n = arr2.size();

    // function call
    cout << "Union of two array is : ";
    printUnion(arr1, arr2, m, n);
    cout << endl;
    cout << "Intersection of two array is : ";
    printIntersection(arr1, arr2, m, n);
    return 0;
}