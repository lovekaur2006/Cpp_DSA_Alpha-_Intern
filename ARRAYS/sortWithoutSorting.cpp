// Given an array which consist only 0, 1,2 . Sort the array without using sorting algo
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {0, 2, 0, 1, 2, 1};
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 0)
        {
            c1++;
        }
        else if (arr[i] == 1)
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    int k = 0;
    for (int i = 0; i < c1; i++)
    {
        arr[k] = 0;
        k++;
    }

    for (int i = 0; i < c2; i++)
    {
        arr[k] = 1;
        k++;
    }
    for (int i = 0; i < c3; i++)
    {
        arr[k] = 2;
        k++;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}