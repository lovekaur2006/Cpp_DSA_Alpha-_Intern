#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxSubArrSum(int arr1[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + arr1[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}

int main()
{
    int arr1[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;
    int max_sum = maxSubArrSum(arr1, n);
    cout << "Maximum contigous sum is " << max_sum;
    return 0;
}